#include <stdio.h>
#include <stdlib.h>

void mult_by_100(int* some, int* all);

int main(void)
{
    int i;
    int j;

    i = 10002;
    j = 65001;

    printf("Value of i = %d,a nd j = %d\n", i , j);
    printf("Addresses of i = %llu and j = %llu\n", &i, &j);

    mult_by_100(&i, &j);

    printf("Value of i = %d, j= %d\n", i, j);
    printf("Address of i = %llu, j =%llu\n", &i, &j);

    exit(0);
}

void mult_by_100(int* p, int* some)
{
    *p = *p *  100;
    *some = *some * 100;
}