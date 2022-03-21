#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};
    int i;

    puts("Printing array elements:");

    for(i = 0; i < 5; ++i)
        printf("Elements at index %d is: %d\n", i, a[i]);
    
    puts("Printing addresses of array elements:");

    for(i = 0; i < 5; ++i)
        printf("Address of element at index %d is %llu\n", i, (unsigned long long int)&a[i]);

    exit(0);
}