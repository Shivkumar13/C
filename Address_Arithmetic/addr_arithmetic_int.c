#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* ptr_int = (int*)2000;

    for(int i=0; i < 10; ++i)
        printf("ptr_int + %d = %llu\n", i, (unsigned long long int)(ptr_int+i));
    exit(0);
}