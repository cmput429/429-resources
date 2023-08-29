#include <pthread.h>


#ifdef SPINLOCK
#ifdef __APPLE__
typedef int pthread_spinlock_t;
#endif
#define LOCK_OBJ pthread_spinlock_t
#define LOCK_INIT pthread_spin_init
#define LOCK_DESTROY pthread_spin_destroy
#define LOCK pthread_spin_lock
#define UNLOCK pthread_spin_unlock
#define TRYLOCK pthread_spin_trylock
#else
#define LOCK_OBJ pthread_mutex_t
#define LOCK_INIT pthread_mutex_init
#define LOCK_DESTROY pthread_mutex_destroy
#define LOCK pthread_mutex_lock
#define UNLOCK pthread_mutex_unlock
#define TRYLOCK pthread_mutex_trylock
#endif

#define HASHDBG //
// Linked-list element struct
struct llElem{
    struct llElem * next;
    char * key;
    void * elem;
};
typedef struct llElem llElem;

//Hashtable struct
typedef struct {
    llElem ** table;
    int size;
#ifdef GLOBAL
    LOCK_OBJ global;
#endif
#ifdef LOCAL
    LOCK_OBJ * local;
#endif
    volatile int collisions;
} hash_tbl;


/**
 * Returns an int indexing into the hashtable, given a key
 */
int ht_hash(hash_tbl * table, char * key, int length);

/**
 * Instantiates the hashtable
 */
hash_tbl * ht_create(int size);

/**
 * Frees all memory associated with a hashtable
 */
void ht_free(hash_tbl * table);
/** 
 * Inserts a new element into the table
 */
void ht_insert(hash_tbl * table, char * key, int length, void * elem);

/**
 * Removes an element from the table, returns BOOL success.
 * The element is dropped from the table, but not deallocated.
 */
int ht_remove(hash_tbl * table, char * key, int length);

/**
 * Returns an element from the table, given a key.
 */
void * ht_get(hash_tbl * table, char * key, int length);

void ht_stats(hash_tbl * table);
