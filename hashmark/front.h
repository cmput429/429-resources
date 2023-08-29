#include "hash.h"

struct p_args {
    FILE * input;
    long int end;
};

struct g_args {
    int startIndex;
    int endIndex;
    int grindCount;
};

/** Number of threads to use */
int threads;

hash_tbl * tbl1;
hash_tbl * tbl2;

void * process(void *);
void * grind(void *);
void * genhash(void *);
