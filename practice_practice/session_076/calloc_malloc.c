#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* allocated_with_malloc = malloc(5 * sizeof(int));
    int* allocated_with_calloc = calloc(5, sizeof(int));
    int i;

    //As you can see all of the values are initialized to zero
    puts("Values of allocated_with_calloc:");
    for(i = 0; i < 5; ++i)
        {
            printf("Values allocated with calloc: %p\n", allocated_with_calloc[i]);
        }

    int* failed_malloc =malloc(1000000000000);
    if (failed_malloc == NULL)
        {
         printf("The memory allocation failed, the value of failed malloc is %p\n",(void*)failed_malloc);   
        }

    free(allocated_with_calloc);
    free(allocated_with_malloc);

    allocated_with_calloc = 0;
    allocated_with_malloc = 0;

    exit(0);

 }