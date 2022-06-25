/*  Define integers in 
    main(). 

    Send array and its size to a function named 
    calculate_sum(). Take array elements from the user. 

    The function should return the summation of 
    all elements in the array 
*/
#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int* p, int size);

int main(void)
{
    int arr[10];
    int sum;

    sum = calculate_sum(&arr[0], 10);

    printf("Sum is %d\n", sum);
    exit(0);

}

int calculate_sum(int* p, int size)
{
    int sum;
    puts("Enter array elements:");
    for(int i = 0; i < 10; ++i)
    {
        printf("Enter array element at index %d\n", i);
        scanf("%d", p + i);
        sum = sum + *(p + i);
    }

    return sum;
}

