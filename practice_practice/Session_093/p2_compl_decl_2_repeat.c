#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int quo(int, int);
int rem(int, int);

void compl_decl(void);
void compl_decl2(void);

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

    int n1 = 40, n2 = 30;

    puts("Using function pointers directly to call function...");
    pfn1(n1,n2);
    pfn2(n1, n2);
    pfn3(n1, n2);
    pfn4(n1, n2);
    pfn5(n1, n2);

    compl_decl();
    compl_decl2();

    exit(0);
}

void compl_decl(void)
{
    puts("Using complicated declaration 1");
    int (*arr[5])(int, int) = {add, sub, mul, quo, rem};

    int i;
    int n1 = 40, n2 = 30;

    for(i = 0; i < 5; ++i)
    {
        printf("pfn[%d](%d, %d) = %d\n", i, n1, n2, arr[i](n1, n2));
    
    }
}

void compl_decl2(void)
{
    puts("Using complicated declaration 2");

    int (*arr[5])(int, int) = {add, sub, mul, quo, rem};
    int (*(*p)[5])(int, int) =  &arr;    // p = &arr
    int n1 = 40, n2 = 30;

    
    printf("Address of Array %llu\n", (unsigned long long int)p);

    for(int i = 0; i < 5; ++i)
     {
       printf("p[%d](%d, %d)=%d\n", i, n1, n2, (*p)[i](n1,n2));
     }

}

int add(int a, int b)
{
    return a +b;
}

int sub(int a, int b)
{
    return a -b;
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