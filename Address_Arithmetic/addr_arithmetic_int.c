#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr_int = (int*)2000;

    for(int i=0; i < 10; ++i)
        printf("Address of integer at index %d is %llu\n", i, (ptr_int+i));
    exit(0);
}