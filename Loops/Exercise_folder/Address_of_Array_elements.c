#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a[8] = {100, 200, 300, 400, 500, 600, 700, 800};
    int i;
    
    puts("Printing array of elements:");
    for(i = 0; i < 8; ++i)
        printf("Element at index %d: %d\n", i, a[i]);

    exit(0);
   
}