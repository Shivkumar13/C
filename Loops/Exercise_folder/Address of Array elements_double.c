#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    double double_array[8] = {1222434.56455756, 33545564.233453, 2352346.23365, 23536.356373, 124536.614235, 124235.31235, 1434245.1234235, 12145325.14245};
    int i;

    for(i = 0; i < 8; ++i)
        printf("Doubles from this array at index %d is %lf with address %llu\n", i, double_array[i], (unsigned long long int)&double_array[i]);

    exit(0);
}