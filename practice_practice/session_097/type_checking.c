#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main(void)
{
    int m1 = 10;
    int n1 = 20;

    int sum = add(m1+n1, m1-n1);

    printf("Sum = %d\n", sum);

    return(0);
}

int add(int a, int b)
{
    return (a + b);
}