#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float* ptr_float = (float*)5430;

    for(int i = 0; i < 10; ++i)
        printf("ptr_float + %d = %llu\n", i, (unsigned long long int)(ptr_float+i));

    exit(0); 
}