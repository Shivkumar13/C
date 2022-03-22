#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    char char_arr[5] = {'A', 'B', 'C', 'D', 'E'};
    char char_arr_2[]= {'A', 'B', 'C'};
    char str_arr[] = "ABC";
    char D[5] = "ABCDE";

    puts("printing char array char_arr");
    for(int i=0; i < 5; i++)
        printf("Array elements at index %d is %c\n", i, char_arr[i]);

    puts("printing char arrau char_arr[2]");
    for(int i=0; i < 3; ++i)
        printf("Array elements at index %d is %c\n", i, char_arr_2[i]);

    puts("printing string ABC");
    for(int i =0; i < 3; ++i)   
        printf("Array elements at index %d is %c\n", i, str_arr[i]);
    
    puts("printing string ABCDE");
    for(int i=0; i < 5; ++i)
        printf("Array elements at index %d is %c\n", i, D[i]);

    exit(0);
    
}