#include <stdio.h>
#include <stdlib.h>

int addition_pass_by_addr(int* i, int* j);

int main(void)
{
    int s = 10;
    int o = 40;
    int sum;

    printf("Value of s before calling addition is %d\n", s);
    printf("Value of o before calling addition is %d\n", o);

    sum = addition_pass_by_addr(&s, &o);
    printf("Summation is %d\n", sum);

    printf("Value of s after calling addition is %d\n", s);
    printf("Value of o after calling addition is %d\n", o);

    exit(0);
    
}

int addition_pass_by_addr(int* lll, int*yyy)
{

    int sum = *lll + *yyy;
    
    *lll = 137;
    *yyy = 282;
    //sum = 14;
    
    return sum;
}