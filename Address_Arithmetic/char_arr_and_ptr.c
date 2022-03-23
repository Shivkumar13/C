#include <stdio.h>
#include <stdlib.h>

char c_arr[5] = {'A', 'B', 'C', 'D', 'E'};
int i;
/*
*(&c_arr[0]) = *(ptr_char + 0)
*(&c_arr[1]) = *(ptr_char + 1)
*(&c_arr[2]) = *(ptr_char + 2)
*(&c_arr[3]) =  *(ptr_char + 3)
*(&c_arr[4]) = *(ptr_char + 4)
*/

int main(void)
{

   puts("Printing addresses of all elements of array:");
   for(i =0; i < 5; ++i)
      {
          printf("Address of elements of array at index %d is %llu\n", i, (unsigned long long int)&c_arr[i]);

      }
    /* Assign the address of first element of the array to a pointer */
    char* ptr_arr =  &c_arr[0];

    for(i =0; i < 5; ++i)
        printf("Printing addresses of all elements of array using pointer arithmetic: p+0, p+1, p+2, p+3: %llu\n", (unsigned long long int)(ptr_arr + i));

    puts("Accesing the array elements by dereferencing the p+0, p+1, p+2, p+3");

    for(i=0; i < 5; ++i)
        printf("Array elements at p + %d is %c\n", i, *(ptr_arr + i));
    
    puts("Modifying the elements at p+0, p+1, p+2, p+3:");

    for(i = 0; i < 5; ++i)
    {
        *(ptr_arr + i) = *(ptr_arr + i) + 32; 
        printf("Modified contents of the array through pointer is %d\n", *(ptr_arr + i));
    }
      exit(0);
}