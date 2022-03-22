#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double* double_ptr = (double*)1000;

    for(int i = 0; i < 7; ++i)
        printf("double_ptr + %d: %llu\n", i,(unsigned long long int)(double_ptr+i));

    exit(0);

}