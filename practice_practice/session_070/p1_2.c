#include <stdio.h>
#include <stdlib.h>

void mult_by_10(int* p, int* q);

int main(void)
{
    int shiv;
    int amey;

    shiv = 137;
    amey = 246;

    printf("Address of the shiv and amey are %llu %llu respectively\n", (unsigned long long int)&shiv, (unsigned long long int)&amey);

    mult_by_10(&shiv, &amey);

    printf("Value of shiv and amey after call to mult_by_10 are shiv = %d , amey = %d\n", shiv, amey);

    printf("Address of the shiv and amey are shiv = %llu and amey = %llu\n", &shiv, &amey);

    exit(0);
}

void mult_by_10(int* p, int* q)
{
    *p = *p * 10;
    *q = *q * 10;
}
