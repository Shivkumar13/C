/*  Define and initialize array of 10 integers in 
    main(). 

    Send array and its size to a function named 
    calculate_sum() 

    The function should return the summation of 
    all elements in the array 
*/

#include <stdio.h>
#include <stdlib.h>

int calculate_sum(int* a, int s);

int main(void)
{
    int arr[10] = {100, 20, 30, 40, 50, 60, 70, 80, 100, 100};

    int sum = calculate_sum(&arr[0], 10);

    printf("Sum of all elements of array element is %d\n", sum);

    exit(0);

}

int calculate_sum(int* a, int s)
{
    int i;
    int sum = 0;

   for(i=0; i < 10; ++i)
   {
       //sum = sum + *(a + i); 
       sum = sum + a[i];
   }

    return sum;
}