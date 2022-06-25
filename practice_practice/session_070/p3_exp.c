#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int (*p)[5]);

int main(void)
{
    int a[5] = {10, 20, 30, 40, 50};

    calculate_sum(&a);

    exit(0);
}

int calculate_sum(int (*p)[5])
{
    int sum = 0;

    for(int i = 0; i < 5; ++i)
    {
    printf("Array element is %d\n", (*p)[i]);
    sum = sum + (*p)[i]; 
    }
    
    printf("Sum is %d\n", sum);
}