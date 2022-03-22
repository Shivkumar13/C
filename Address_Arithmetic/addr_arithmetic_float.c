#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float* ptr_float = (float*)5430;

    for(int i = 0; i < 10; ++i)
        printf("Address of float at number %d is %llu\n", i, (ptr_float+i));

    exit(0); 
}