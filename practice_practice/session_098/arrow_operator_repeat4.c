#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float c;
};

int main(void)
{
    struct A inA;
    struct A* pA;

    pA = &inA;

    struct A* pA1 = 0;

    puts("Calculating offset using the structure instance, struct pointers!");
    printf("&pA->a = %llu\n", (unsigned long long int)&pA->a);
    printf("&pA->b = %llu\n", (unsigned long long int)&pA->b);
    printf("&pA->c = %llu\n", (unsigned long long int)&pA->c);


    printf("&pA1->a = %llu\n", (unsigned long long int)&pA1->a);
    printf("&pA1->b = %llu\n", (unsigned long long int)&pA1->b);
    printf("&pA1->c = %llu\n", (unsigned long long int)&pA1->c);

    printf("Offset(Struct A, a) =  %llu\n",(unsigned long long int)(&((struct A*)0)->a));
    printf("Offset(Struct A, b) =  %llu\n",(unsigned long long int)(&((struct A*)0)->b));
    printf("Offset(Struct A, c) = %llu\n", (unsigned long long int)(&((struct A*)0)->c));

    return(0);
}