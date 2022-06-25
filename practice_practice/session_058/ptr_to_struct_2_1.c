#include <stdio.h>
#include <stdlib.h>

struct B
{
    int a[4];
    float b[5];
    double d[6];
};

int main(void)
{
    struct B inB;
    struct B* pB;
    int i;

    pB = &inB;

    for(i = 0; i < 5; ++i)
        pB->d[i] = (i + 1) * 100;

    for(i = 0; i < 5; ++i)
        printf("%lf\n", pB->d[i]);
    
    exit(0);

}