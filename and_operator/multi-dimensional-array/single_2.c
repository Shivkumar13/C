#include <stdio.h>
#include <stdlib.h>

#define N1 10

void print_arr(int [N1], int size);

int main(void)
{
    int arr[N1] = {11, 3, 5,6 ,6, 4, 5, 6, 7, 8};

    print_arr(arr, N1);

    exit(EXIT_SUCCESS);

}

void print_arr(int A[N1], int size)
{
    int i;
    for(int i =0; i < N1; ++i)
    {
        printf("Array elements at index %d is %d\n", i, A[i]);
    }

}