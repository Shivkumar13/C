#include <stdio.h>
#include <stdlib.h>


struct A
{
    int a;
    char b;
    float c;
};

struct A inA;
struct A* pA = &inA;
struct A* pA1;

int main(void)
{
    puts("Calculating offset of a, b, c in the structure A");

    printf("&inA = %llu\n", (unsigned long long int)&inA);
    printf("&inA.a = %llu\n", (unsigned long long int)&inA.a);
    printf("&inA.b = %llu\n", (unsigned long long int)&inA.b);
    printf("&inA.c = %llu\n", (unsigned long long int)&inA.c);

    printf("&pA->a = %llu\n", (unsigned long long int)&pA->a);
    printf("&pA->b = %llu\n", (unsigned long long int)&pA->b);
    printf("&pA->c = %llu\n", (unsigned long long int)&pA->c);

    printf("&pA1->a = %llu\n", (unsigned long long int)&(((pA1)->a)));
    printf("&pA1->b = %llu\n", (unsigned long long int)&(((pA1)->b)));
    printf("&pA1->c = %llu\n", (unsigned long long int)&(((pA1)->c)));

    puts("Now without creating structure instance, without structure pointer");
    printf("Offset(struct A, a) = %llu\n",(unsigned long long int)(&((struct A*)0)->a));
    printf("Offset(struct A, b) = %llu\n", (unsigned long long int)(&((struct A*)0)->b));
    printf("Offset(struct A, c) = %llu\n", (unsigned long long int)&(((struct A*)0)->c));

    return (0);

}