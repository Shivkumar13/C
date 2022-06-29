#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

int main(void)
{
    int* ptr_malloc = 0;
    int* ptr_calloc = 0;
    int nr_of_elements = 20;
    int i;

    ptr_malloc = malloc(nr_of_elements * sizeof(int));
    assert(ptr_malloc != 0);

    for(i = 0; i < nr_of_elements; ++i)
    {
        printf("*(ptr_malloc + %d): %d\n", i, *(ptr_malloc + i));
    }

    free(ptr_malloc);
    ptr_malloc = 0;

    ptr_calloc = calloc(nr_of_elements, sizeof(int));
    assert(ptr_calloc != 0);

    for(i = 0; i < nr_of_elements; ++i)
    {
        printf("*(ptr_calloc + %d): %d\n", i, *(ptr_calloc + i));
    }

    free(ptr_calloc);
    ptr_calloc = 0;

    exit(0);
}