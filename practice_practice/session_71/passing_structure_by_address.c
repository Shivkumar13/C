#include <stdio.h>
#include <stdlib.h>

struct A
{
    int i;
    char b;
    float c;
};

void struct_by_address_func(struct A* something);

int main(void)
{
   struct A inA;

    struct_by_address_func(&inA);

     inA.i = 1000; 
    inA.b = 'Z'; 
    inA.c = 100.43; 
    printf("In MAIN, the structure values are %d %c %f\n", inA.i, inA.b, inA.c);
    exit(0);
}

void struct_by_address_func(struct A* some)
{
    some->i = 45;
    some->b = 'S';
    some->c = 45.56;

    printf("In func,struct_by_add, the structure values are %d %c %f\n", some->i, some->b, some->c);
}