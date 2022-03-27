/*
    Goal: 
        Take two variable in main
        assign them some value.
        Write a function to multiply the original value by 10.
        Store the results in variables.
*/
#include <stdio.h>
#include <stdlib.h>

void mult_by_10(int* p, int* q);

int main(void)
{
    int x;
    int y;

    x = 13;
    y = 17;

    print("Values at x and y before calling mult_by_10 are %d, %d\n", x, y);
    printf("Address of x and y are %llu, %llu\n", (unsigned long long int)&x, (unsigned long long int)&y);

    mult_by_10(&x, &y);

    printf("Value of x and y after calling mult_by_10 are %d, %d\n", x, y);
    printf("Address of x an y are %llu, %llu\n", (unsigned long long int)&x, (unsigned long long int)&y);

    exit(0);
}

void mult_by_10(int* p, int * l)
{
    *p = *p * 10;
    *l = *l * 10;
}