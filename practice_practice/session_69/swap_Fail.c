#include <stdio.h>
#include <stdlib.h>

void swap(int a, int b);

int main(void)
{
    int i;
    int j;

    i = 13;
    j = 7;

    printf("Before calling swap function i =%d, j=%d\n", i, j);
    swap(i , j);
    printf("After calling swap i=%d, j=%d\n", i, j);

    exit(0);
}

void swap(int something, int anything)
{
     int temp;

     temp = something;
     something = anything;
     anything = temp;
}