#include <stdio.h>
#include <stdlib.h>

struct B
{
    int a[5];
    float b[4];
    double c[5];
};

int main(void)
{
    struct B inB;
    struct B* pB;
    int i;

    pB = &inB;

    for(i = 0; i < 4; ++i)
        pB->b[i] = (i + 1) * 100;

    for(i = 0; i < 4; ++i)
        printf("%f\n", pB->b[i]);
        
    exit(0);
}