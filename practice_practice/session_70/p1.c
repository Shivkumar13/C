/* Take two local variables in main. 
    assign them some value 
    Write function which will multiply 
    current values in the variables by 
    10 and store the result in the variables 
*/ 

#include <stdio.h>
#include <stdlib.h>

void mult_by_10(int* p, int* q);


int main(void)
{
    int num_1 = 100;
    int num_2 = 200;

    printf("Values of num_1=%d and num_2=%d\n", num_1, num_2);
    printf("Address of num_1 =%llu and num_2=%llu\n", &num_1, &num_2);

    mult_by_10(&num_1, &num_2);

    printf("After call to mult_by_10, value of num_1=%d, num_2=%d\n", num_1, num_2);
    printf("Address of num_1=%llu, num_2=%llu\n", (unsigned long long int)&num_1, (unsigned long long int)&num_2);

    exit(0);

}

void mult_by_10(int* p, int * q)
{

    *p = *p * 10;
    *q = *q * 10;
    
}