#include "hash_test.h"
#include "hash.h"
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char ** argv) {
    printf("Testing hashtable creation...");
    fflush(stdout);
    test_create();
    printf("Passed\n");

    printf("Testing object insertion...");
    fflush(stdout);
    test_insert();
    printf("Passed\n");

    printf("Testing object removal...");
    fflush(stdout);
    test_remove();
    printf("Passed\n");
    return 0;
}

void test_create() {
    hash_tbl * table = ht_create(10);
    
    assert(table != 0);
    
    ht_free(table);
}

void test_insert() {
    hash_tbl * table = ht_create(10);
    int * test = malloc(sizeof(int));
    *test = 15;

    ht_insert(table, "test", 5, test);
    int * out = (int *) ht_get(table, "test", 5);

    assert(test == out);
    free(test);
    ht_free(table);
}

void test_remove() {
    hash_tbl * table = ht_create(10);
    int * test = malloc(sizeof(int));
    *test = 15;

    ht_insert(table, "test", 5, test);
    int success = ht_remove(table, "test", 5);
    int failure = ht_remove(table, "nope", 5);

    assert(success == 1);
    assert(failure == 0);
    int * out = (int *) ht_get(table, "test", 5);
    assert(NULL == out);
    free(test);
    ht_free(table);
}
