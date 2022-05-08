#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int quo(int, int);
int rem(int, int);
void compl_decl(void);
void compl_decl_2(void);

int main(void)
{

    int (*pfn1)(int, int);
    int (*pfn2)(int, int);
    int (*pfn3)(int, int);
    int (*pfn4)(int, int);
    int (*pfn5)(int, int);

    pfn1 = add;
    pfn2 = sub;
    pfn3 = mul;
    pfn4 = quo;
    pfn5 = rem;

    int n1 = 12, n2 = 10;
    
    puts("Using normal method, calling functions with pfn pointers");

    printf("Addition is %d\n", pfn1(n1, n2));
    printf("subtraction is %d\n",pfn2(n1, n2));
    printf("Multiplication is %d\n", pfn3(n1, n2));
    printf("Quotient is %d\n", pfn4(n1, n2));
    printf("Reminder is %d\n", pfn5(n1, n2));

    compl_decl();
    compl_decl_2();

    exit(0);
}

void compl_decl(void)
{
    int (*arr[5])(int, int) = {add, sub, mul, quo, rem};

    int n1 = 12, n2 = 10;
    int i;
    
    puts("Using complicated declarations");

    for(i = 0; i < 5; ++i)
    {
        printf("pfn[%d](%d, %d)=%d\n", i, n1, n2, arr[i](n1, n2));
    }

}

void compl_decl_2(void)
{
    int (*arr[5])(int, int) = {add, sub, mul, quo, rem};
    int (*(*p)[5])(int, int);

    puts("Using complicated declarations 2");
    p = &arr;
    int n1 = 12, n2 = 10, i;

    for(i = 0; i < 5; ++i)
    {
        printf("pfn[%d](%d, %d)=%d\n", i, n1, n2, (*p)[i](n1, n2));
    }

}

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int quo(int a, int b)
{
    return a / b;
}
int rem(int a, int b)
{
    return a % b;
}   