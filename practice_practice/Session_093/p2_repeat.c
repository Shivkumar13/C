#include <stdio.h>
#include <stdlib.h>

int add(int, int);
int sub(int, int);
int mul(int, int);
int quo(int, int);
int rem(int, int);
void compl_decl(int, int);

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

    int n1 = 13, n2 = 7;

    printf("Addition is %d\n", pfn1(n1,n2));
    printf("Subtraction is %d\n", pfn2(n1, n2));
    printf("Multiplication is %d\n", pfn3(n1, n2));
    printf("Quotient is %d\n", pfn4(n1, n2));
    printf("Reminder is %d\n", pfn5(n1, n2));

    puts("Using complecated declaration for array...!");
    compl_decl(n1, n2);

    puts("Success...........!!!!!!!");
    
    exit(0);
}

// Usin Complicated declaration func

void compl_decl(int a, int b)
{

   int (*arr[5])(int, int) = {add, sub, mul, quo, rem};
   int i;

   for(i = 0; i < 5; ++i)
   {
       printf("pfn%d(%d, %d)=%d\n", i, a, b, arr[i](a, b));
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
    return a* b;
}

int quo(int a, int b)
{
    return a / b;
}

int rem(int a, int b)
{
    return a % b;
}

