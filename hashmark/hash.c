#include "hash.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <errno.h>
#ifdef __APPLE__
#include "pspin.h"
#endif
/**
 * Implements a non-resizable hashtable, which uses linked-lists 
 * to handle collisions. Instantiation and destruction are not
 * thread-safe, but all accesses are.
 */

void lock(hash_tbl * tbl, int index) {
    HASHDBG("Locking %ld - %d = ", tbl, index);
    fflush(stdout);
#ifdef GLOBAL
    int success = LOCK(&tbl->global);
    assert(success == 0);
#endif
#ifdef LOCAL
    int success = 0;
    while((success = TRYLOCK(&tbl->local[index])) != 0) {
       tbl->collisions++; 
    }
    assert(success == 0);
#endif
    HASHDBG("Done\n");
}

void unlock(hash_tbl * tbl, int index) {
    HASHDBG("Unlocking %ld - %d = ", tbl, index);
    fflush(stdout);
#ifdef GLOBAL
    int success = UNLOCK(&tbl->global);
    assert(success == 0);
#endif
#ifdef LOCAL
    int success = UNLOCK(&tbl->local[index]);
    assert(success == 0);
#endif
    HASHDBG("Done\n");
}

//Implementing djb2
int ht_hash(hash_tbl * tbl, char * key, int length) {
    int hash = 5381;
    int index = 0;
    while (key[index] != 0 && index < length)
    {
        hash = ((hash << 5) + hash) + key[index];
        index++;
    }
    hash = hash % tbl->size;
    if (hash < 0) {
        hash += tbl->size;
    }
    return hash;
}

hash_tbl * ht_create(int size) {
    hash_tbl * table = malloc(sizeof(hash_tbl));
    table->size = size;
    table->table = malloc(size*sizeof(llElem *));
    //defensive, 0 the memory
    memset(table->table, 0, size*sizeof(llElem *));
    //init collision counter
    table->collisions = 0;
    //setup the mutexes
#ifdef GLOBAL
    int success = LOCK_INIT(&table->global, NULL);
    assert(success == 0);
#endif
#ifdef LOCAL
    table->local = malloc(size*sizeof(LOCK_OBJ));
    for(int i=0;i<size;i++) {
        int success = LOCK_INIT(&table->local[i], NULL);
        assert(success == 0);
    }
#endif
    return table;
}


void ht_free(hash_tbl * tbl) {
    //Free all entries if they exist
    for (int i = 0; i < tbl->size; i++) {
        llElem * entry = tbl->table[i];
        
        //Traverse the linked-list
        while (entry != 0) {
            llElem * to_free = entry;
            entry = entry->next;
            free(to_free->key);
            free(to_free);
        }
    }
#ifdef GLOBAL
    int success = LOCK_DESTROY(&tbl->global);
    assert(success == 0);
#endif
#ifdef LOCAL
    for(int i=0;i<tbl->size;i++) {
        int success = LOCK_DESTROY(&tbl->local[i]);
        assert(success == 0);
    }
    free((void *) tbl->local);
#endif
    //Free the table itself
    free(tbl);
}

void ht_insert(hash_tbl * tbl, char * key, int length, void * elem) {
    //Setup the chunk to insert
    llElem * newLLElem = malloc(sizeof(llElem));
    newLLElem->elem = elem;
    
    char * key_copy = malloc((length+1)*sizeof(char));
    strncpy(key_copy, key, length);
    key_copy[length] = 0;

    newLLElem->key = key_copy;

    //Generate the index
    int index = ht_hash(tbl, key_copy, length);
    
    lock(tbl, index);
    
    //insert to the head of the table
    newLLElem->next = tbl->table[index];
    tbl->table[index] = newLLElem;

    unlock(tbl, index);
}

int ht_remove(hash_tbl * tbl, char * key, int length) {
    /*
     * Returns 1 if remove is successful, else 0
     */

    //find the hash entry
    int index = ht_hash(tbl, key, length);
    
    //iterate through to find the entry
    if (tbl->table[index] == 0)
    {
        //printf("hash location for %s empty\n", key);
        return 0;
    }

    lock(tbl, index);

    if (strncmp(tbl->table[index]->key, key, length) == 0)
    {
        //printf("element %s found at linked-list root\n", key);
        llElem * destroy = tbl->table[index];
        tbl->table[index] = tbl->table[index]->next;
        free(destroy->key);
        free(destroy);
        unlock(tbl, index);
        return 1;
    }
    llElem * last = tbl->table[index];
    llElem * entry = tbl->table[index]->next;
    while(entry != 0 && strncmp(entry->key, key, length) != 0)
    {
        //printf("%s != %s", key, entry->key);
        last = entry;
        entry = entry->next;
    }

    //Return on failure
    if (entry == 0)
    {
        //printf("%s not found in hash location\n");
        unlock(tbl, index);
        return 0;
    }

    //We must have found it
    //printf("element %s found in linked-list\n", key);
    last->next = entry->next;
    free(entry->key);
    free(entry);
    unlock(tbl, index);
    return 1;
}

void * ht_get(hash_tbl * tbl, char * key, int length) {
    /* 
     * Returns the element if it exists,
     * otherwise returns a null pointer
     */
    int index = ht_hash(tbl, key, length);
    lock(tbl, index);
    llElem * entry = tbl->table[index];
    while(entry != 0 && strncmp(entry->key, key, length) !=0)
    {
        entry = entry->next;
    }

    if (entry == 0) {
        unlock(tbl, index);
        return NULL;
    }
    unlock(tbl, index);
    return entry->elem;
}
void ht_stats(hash_tbl * tbl) {
    printf("Table lock collisions: %d\n", tbl->collisions);
}
