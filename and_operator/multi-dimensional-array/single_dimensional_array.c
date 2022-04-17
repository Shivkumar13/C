#include <stdio.h>
#include <stdlib.h>

#define N1 5

void print_array(int [N1], int size);

int main(void)
{
    int arr[N1] = {100, 400, 300, 500, 600};

    print_array(arr, N1);

    exit(EXIT_SUCCESS);
}

void print_array(int a[N1], int size)
{
    int i;
    for(i = 0; i < size; ++i)
    {
        printf("Array elements at index %d is %d\n",i, a[i]);
    }
}