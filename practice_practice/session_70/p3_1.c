/*  Define and initialize array of 10 integers in 
    main(). 

    Send array and its size to a function named 
    calculate_sum() 

    The function should return the summation of 
    all elements in the array 
*/
#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int* p, int size);

int main(void)
{
    int int_arr[20];

    int sum = calculate_sum(&int_arr[0], 20);

    printf("Sum of all array elements is %d\n", sum);

}

int calculate_sum(int* p, int size)
{
    int sum;
   puts("Enter array elements");
   for(int i = 0; i < 20; ++i)
    { 
    printf("Enter array element at index %d\n", i);
    scanf("%d", p+i);
    sum = sum + *(p + i);
    }

    return sum;
 
}