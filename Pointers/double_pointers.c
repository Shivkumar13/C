#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    i =10;

    int* ptr_i;

  //  char c;
    //char* ptr_c;

    ptr_i = &i;
    printf("Address of i is &i=%llu And ptr_i=%llu\n", (unsigned long long int)&i, (unsigned long long int)ptr_i);
    
    puts("Double Pointer...");

    int** ptr_ptr_i;
    ptr_ptr_i = &ptr_i;

    printf("Address IN ptr_i is %llu\n", (unsigned long long int)ptr_i);
    printf("[1] Address OF ptr_i is %llu\n", (unsigned long long int)&ptr_i);


    printf("[1] address stored in ptr_ptr_i means address of ptr_i is %llu\n", (unsigned long long int)ptr_ptr_i);
    printf("IMPPP address stored in ptr_ptr_i means address of ptr_i is %llu\n", *ptr_ptr_i);


     printf("Value of *ptr_i is %d\n", *ptr_i);
    printf("[1] address stored in ptr_ptr_i means address of ptr_i is %llu\n", **ptr_ptr_i);

    
    printf("Integer Value stored in the address whose address is stored in ptr_ptr_i is %llu\n", **ptr_ptr_i);

    printf("Value of *ptr_i is %d\n", *ptr_i);

    //printf("Address of pointer ptr_i itself is %llu ");

 //   ptr_c = &c;
   // printf("Address of c is &c=%llu And ptr_c=%llu\n", &c, ptr_c);

 
}