#include <stdio.h>
#include <stdlib.h>

void swap(int* i, int* j);

int main(void)
{
    int i =  13;
    int j = 14;

    printf("Values before swapping are i=%d j=%d\n", i , j);
    swap(&i, &j);
    printf("Values after swapping i=%d j=%d\n", i, j);

    exit(0);
}

void swap(int* l, int* k)
{
    int* temp;
    int gg;
    temp = &gg;

    int n1=23;
    int* p_n1 = &n1;

    *temp = *l;
    printf("Value of gg is %d\n", *temp);

    puts("check");
    *l = *k;
    *k = *temp;
}