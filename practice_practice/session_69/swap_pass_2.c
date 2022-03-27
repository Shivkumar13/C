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

    printf("swap start, i = %d, j=%d\n", *p, *q);
    tmp = *p;
    *p = *q;
    *q = tmp;
    printf("swap end, i =%d, j=%d\n", *p, *q);
    
}