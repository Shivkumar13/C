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
    puts("Calculating the offset of members in struct without creating structure instance or withour declaring a structure pointer!");

    printf("Offset(struct A, a) = %llu\n", (unsigned long long int)(&((struct A*)0)->a));
    printf("Offset(struct A, b) = %llu\n", (unsigned long long int)(&((struct A*)0)->b));
    printf("Offset(struct A, c) = %llu\n",  (unsigned long long int)(&((struct A*)0)->c));

    return(0);
}