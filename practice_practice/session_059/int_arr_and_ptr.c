#include <stdio.h>
#include <stdlib.h>


int arr[5] = {10, 20, 30, 40, 50};
int* p;
int i;

int main(void)
{

    puts("Array of integers\n");
    for(i=0; i < 5; ++i)
    {
        printf("Array of integers index %d is %d\n", i, arr[i]);
    }

    p = &arr[0];

    puts("Accessing array by pointer:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("Value of array integers at %d is %d\n", i, *(p+i));
    }

    puts("Modifying the array elements by pointer:\n");
    for(int i = 0; i < 5; ++i)
    {
        *(p+i) = (i+1) * 13;
    }

    puts("Accessing the modified elements in the array:\n");
    for(int i = 0; i < 5; ++i)
    {
        printf("Array elements at index %d is %d\n", i, *(p+i));
    }

    exit(0);

}