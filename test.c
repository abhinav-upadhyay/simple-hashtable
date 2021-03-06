#include <stdio.h>
#include <stdlib.h>
#include "hashtable.h"

int
main(int argc, char **argv)
{
    hashtable *ht = init(10);
    const char *x = "abhinav";
    int age = 22;
    put(ht, "name", (void *) x);
    put(ht, "age", (void *) &age); 
    printf("%s\n", (char *) get(ht, "name"));
    printf("%d\n", *(int *)get(ht, "age"));
    clear(ht);
    return 0;
           
}
