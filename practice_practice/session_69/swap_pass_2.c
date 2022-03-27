#include <stdio.h>
#include <stdlib.h>

void swap(int* p, int* q);

int main(void)
{
    int i = 13;
    int j = 7;
    
    printf("Before Swap, Value of i=%d and j=%d\n", i, j);
    printf("Address of i=%llu and j=%llu\n", (unsigned long long int)&i, (unsigned long long int)&j);

    swap(&i, &j);

    printf("After Swap, Value of i=%d, j=%d\n", i, j);
    printf("Address of i=%llu and j=%llu\n", (unsigned long long int)&i, (unsigned long long int)&j);

    exit(0);

}

void swap(int* p, int* q)
{
    int tmp;

    printf("swap function start, i = %d, j=%d\n", *p, *q);

    printf("Address OF p = %llu\n", (unsigned long long int)&p);
    printf("Address OF q = %llu\n", (unsigned long long int)&q);
    printf("Address IN p = %llu\n", (unsigned long long int)p);
    printf("Address IN q =%llu\n", (unsigned long long int)q);

    tmp = *p;
    *p = *q;
    *q = tmp;
    printf("swap end, i =%d, j=%d\n", *p, *q);
    
}