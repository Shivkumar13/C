#include <stdio.h> 
#include <stdlib.h> 

int num_1; 
int num_2; 

int main(void)
{
    num_1 = 1;      /* let num_1 contain TRUE */ 
    num_2 = !num_1; 
    printf("num_1=%d, num_2=%d\n", num_1, num_2); 

    num_1 = 0;      /* let n contain FALSE */ 
    num_2 = !num_1; 
    printf("num_1=%d, num_2=%d\n", num_1, num_2); 

    exit(0); 
}

/* 
!n = NOT n 
*/ 