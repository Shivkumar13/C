#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double* double_ptr = (double*)1000;

    for(int i = 0; i < 7; ++i)
        printf("Array elements addresses for the double as per the sequence are %d: %llu\n", i, double_ptr+i);

    exit(0);


}