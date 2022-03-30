#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* a = 0;
    int size_of_array = 5;

    a = malloc(size_of_array * sizeof(int));

    if(a == 0)
    {
        printf("Memory allocation failed");
        exit(-1);
    }

    for(int i =0; i < 5; ++i)
    {
        *(a + i) = (i + 1) * 100;
        printf("Value of array at index %d is %d\n", i, *(a+i));
    }

    free(a);
    a =0;

    exit(0);

}
