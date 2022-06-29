#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    int* ptr_m = 0;
    int* ptr_c = 0;
    int nr_of_elements = 50;
    int i;

    ptr_m = malloc(nr_of_elements * sizeof(int));
    assert(ptr_m != 0);
    for ( i = 0; i < nr_of_elements; ++i)
    {
        printf("*(ptr_m + %d) : %d\n", i, *(ptr_m + i));
    }

    free(ptr_m);
    ptr_m = 0;

    ptr_c = calloc(nr_of_elements, sizeof(int));
    assert(ptr_c != 0);
    for(i = 0; i < nr_of_elements; ++i)
    {
        printf("*(ptr_c + %d): %d\n", i, *(ptr_c + i));
    }

    free(ptr_c);
    ptr_c = 0;

    exit(0);
}