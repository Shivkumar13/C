#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int quo(int, int);
int rem(int, int);

int main(void)
{

    int (*pfn1)(int, int);
    int (*pfn2)(int, int);
    int (*pfn3)(int, int);
    int (*pfn4)(int, int);
    int (*pfn5)(int, int);

    pfn1 = add;
    pfn2= sub;
    pfn3 = mul;
    pfn4 = quo;
    pfn5 = rem;

    int n1 = 13, n2 = 7;

    printf("Addition with ptr to func: %d and %d is %d,\n", n1, n2, pfn1(n1, n2));
    printf("Substraction with ptr to func: %d and %d is %d\n", n1, n2, pfn2(n1, n2));
    printf("Multiplication with ptr to function: %d and %d is %d\n", n1, n2, pfn3(n1, n2));
    printf("Quotient with the div of %d by %d is %d\n", n1, n2, pfn4(n1, n2));
    printf("Reminder from div of %d by %d is %d\n", n1, n2, pfn5(n1, n2));

    exit(0);
}

int add(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int sub(int a, int b)
{
    int sub;
    sub = a -b;
    return sub;
}

int mul(int a, int b)
{
    int mul;
    mul = a * b;
    return mul;
}

int quo(int a, int b)
{
    int quo;
    quo = a/ b;
    return quo;
}

int rem(int a, int b)
{
    int rem;
    rem = a % b;
    return rem;
}