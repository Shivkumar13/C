#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    int arr[5];
};

int main(void)
{

    struct A inA;
    int i;

    inA.a = 45;
    inA.b = 'a';
    
    for(i =0; i < 5; ++i)
    {
        inA.arr[i] = (i + 1) * 1;
    }

    printf("structure members are as follows: %d %c %d %d %d %d %d\n", inA.a, inA.b, inA.arr[0], inA.arr[1], inA.arr[2], inA.arr[3], inA.arr[4]);

    exit(0);
}