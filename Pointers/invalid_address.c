#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* p = (int*)0;

    puts("Start");
    *p=100;
    puts("End");

    exit(0);
}