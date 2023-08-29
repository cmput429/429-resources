#include <pthread.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <dirent.h>
#include "front.h"

pthread_barrier_t barrier;

int main(int argc, char ** argv) {
    if(argc != 3) {
        printf("USAGE: %s THREADS INPUTFILE\n", argv[0]);
        return 1;
    }
    int tablesize = 1024;
    //Create the tables
    tbl1 = ht_create(tablesize);
    tbl2 = ht_create(tablesize);
    //Get the number of threads
    int thread_count = atoi(argv[1]);
    printf("Using %d threads\n", thread_count);
    pthread_t * threads = malloc((thread_count-1)*sizeof(pthread_t));

    //Get the file

    FILE * input = fopen(argv[2], "rb");
    if(input == NULL) {
        printf("Error reading file: %s\n", argv[2]);
        return 1;
    }

    fseek(input, 0L, SEEK_END); //Go to end of file
    long int size = ftell(input);
    //This first file will be processed on this thread
    fseek(input, 0L, SEEK_SET);

    for (int i=1; i<thread_count; i++) {
        //Make the arguments
        struct p_args * t_args = malloc(sizeof(struct p_args));
        t_args->input = fopen(argv[2], "rb");
        t_args->end = size/thread_count*(i+1);
        //Get to our starting point
        fseek(t_args->input, size/thread_count*i, SEEK_SET);
        //Get to the start of the next line
        char dump=0;
        while(dump != '\n') {
            fread(&dump, sizeof(char), 1, t_args->input);
        }
        pthread_create(&threads[i-1], NULL, &process, (void *) t_args); 
    }
    struct p_args args;
    args.input = input;
    args.end = size/thread_count;
    process(&args);

    //wait for all threads to complete
    for(int i=0; i<thread_count-1; i++) {
        pthread_join(threads[i], NULL);
    }
    //At this point, all the files have been loaded
    //Time to create the second hashtable
    pthread_barrier_init(&barrier, NULL, thread_count);
    for(int i=0;i<thread_count;i++) {
        struct g_args * gargs = malloc(sizeof(struct g_args));
        gargs->startIndex = tablesize/thread_count*i;
        gargs->endIndex = tablesize/thread_count*(i+1);
        if(i<thread_count - 1) {
            pthread_create(&threads[i], NULL, &genhash, (void *) gargs);
        } else {
            genhash((void *) gargs);
        }
    }
    for(int i=0;i<thread_count;i++) {
        struct g_args * gargs = malloc(sizeof(struct g_args));
        gargs->grindCount = 64;
        gargs->startIndex = tablesize/thread_count*i;
        gargs->endIndex = tablesize/thread_count*(i+1);
        printf("Thread %d: %d to %d\n", i, gargs->startIndex, gargs->endIndex);
        if(i<thread_count - 1) {
            pthread_create(&threads[i], NULL, &grind, (void *) gargs);
        } else {
            grind((void *) gargs);
        }
    }
    return 0;
}

void * process(void * vargs) {
    struct p_args * args = (struct p_args *) vargs;
    int records = 0;
    char line[256];
    while (ftell(args->input) < args->end && fgets((char *) &line, 255, args->input)) {
        line[255]=0;
        //find the equals sign
        char * split = strchr((char *)&line,'=');
        assert(split != 0);
        //turn it into a string break
        *split = 0;
        //Move to the next character
        split++;
        //find the length of the key
        int length = (int)((long int)split-(long int)(&line));
        //make a copy to store the value
        char * value = malloc((strlen(split)+1)*sizeof(char));
        strcpy(value, split);
        ht_insert(tbl1, (char *)&line, length, value);
        records++;
    }
    fclose(args->input);
    return NULL;
}

void * genhash(void * args) {
    struct g_args * gargs = (struct g_args *) args;
    hash_tbl * tables[2] = {tbl1, tbl2};
    //Bad coding practices - reaching into the hashmap structure
    for(int index = gargs->startIndex; index < gargs->endIndex; index++) {
        llElem * entry = tables[0]->table[index];
        while (entry != NULL) {
            int len = strlen(entry->key)+1;
            ht_insert(tables[1], 
                      entry->elem, 
                      strlen(entry->elem)+1, 
                      entry->key);
            entry = entry->next;
        }
    }
    pthread_barrier_wait(&barrier);
    return NULL;
}

void * grind(void * args) {
    struct g_args * gargs = (struct g_args *) args;
    hash_tbl * tables[2] = {tbl1, tbl2};
    //Bad coding practices - reaching into the hashmap structure
    for(int iter = 0; iter < gargs->grindCount; iter++) {
        for(int index = gargs->startIndex; index < gargs->endIndex; index++) {
            llElem * entry = tables[iter % 2]->table[index];
            while (entry != NULL) {
                ht_get(tables[(iter+1) % 2], 
                       (char *) entry->elem,
                       strlen(entry->elem));
                entry = entry->next;
            }
        }
        pthread_barrier_wait(&barrier);
    }
    return NULL;
}
