#include <stdio.h>
#include <stdlib.h>

void test_function(int n);

int main(void)
{
    test_function(1);    
}

void test_function(int n)
{
    if(n == 10)
        return;
        
    printf("n = %d\n", n);
    test_function(n + 1);
    printf("Returning from the function with n = %d\n", n);
}