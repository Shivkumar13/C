#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    struct B
    {
        int num;
        char alpha;
        float beta;
    }inB;
    double d;
}inA;

int main(void)
{

    struct A inA = {
            4, 
            'A',
            {
                56, 'N', 4.5
            },
            45623.7674
        };

    puts("printing the structure elements:");
    
    printf("%d %c %d %c %f %lf\n", inA.a, inA.b, inA.inB.num, inA.inB.alpha, inA.inB.beta, inA.d);

    exit(0);
}