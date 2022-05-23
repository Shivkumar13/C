//#include <stdio.h>
//#include <stdlib.h>

#define MAX(a, b)   ((a) > (b) ? (a) : (b))

int main(void)
{
    int n1 = 3, n2 = 4;
    float f1 = 2.3f, f2 = 3.4f;
    double d1 = 2.3, d2 = 4.5;

    int ret1;
    int ret2;
    int ret3;

    ret1 =  MAX(n1, n2);
    ret2 = MAX(f1, f2);
    ret3 = MAX(d1, d2);

    printf("ret1= %d, ret2 = %f, ret3 = %d\n", ret1, ret2, ret3);

    return(0);

}