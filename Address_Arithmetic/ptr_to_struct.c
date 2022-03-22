#include <stdio.h>
#include <stdlib.h>

struct A
{
    int i;
    char b;
    float j;
};

int main(void)
{
    struct A in1;
    struct A* ptr_in1;

    ptr_in1 = &in1;

    ptr_in1->i = 1;
    ptr_in1->b = 'S';
    ptr_in1->j = 4.6;

    printf("Members of struct A are %d, %c, %f\n", ptr_in1->i, ptr_in1->b, ptr_in1->j);

    exit(0);
}