#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float float_arr[8] = {4.567, 8.9656, 3254.545645, 2343.457, 2346.545, 2123.3454, 2364.123, 12.45};
    int i;

    for(i = 0; i < 8; ++i)
        printf("Floating point numbers at index %d are %f with address %llu\n", i, float_arr[i], (unsigned long long int)&float_arr[i]);
        
    exit(0);
}