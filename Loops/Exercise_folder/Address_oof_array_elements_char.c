#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char char_array[8] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H'};
    int i;

    for(i = 0; i < 8; ++i)
        printf("Addresses of the array element %c at index %d is %llu\n", char_array[i], i, (unsigned long long int)&char_array[i]);

    exit(0);
}