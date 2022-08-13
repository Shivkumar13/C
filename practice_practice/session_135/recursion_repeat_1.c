#include <stdio.h>
#include <stdlib.h>

void test_function(int n);

int main(void)
{
    int n;

    test_function(1);
    return (0);
}

void test_function(int n)
{
    /*
    if(n == 8)
    {
        return;
    }
    */

    printf("n = %d\n", n);
    test_function(n+1);
}