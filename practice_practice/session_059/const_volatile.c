#include <stdio.h>
#include <stdlib.h>

int* p;

int main(void)
{
    const int num = 500;

    p = &num;
    *p = 5000;
    printf("num = %d\n",num);

    printf("value *p = %d\n", *p);

    exit(0);
}