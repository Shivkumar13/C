#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    puts("one");  //7
    i = 5;
    while(i < 35)
    {
        printf("i = %d\n", i);
        i = i + 5;
    }
 
    puts("two");  //5
    i = 0;
    while(i < 10)
    {
        printf("i = %d\n", i);
        i = i + 2;
    }

    puts("three"); //5
    i = 1;
    while(i < 10)
    {
        printf("i = %d\n", i);
        i = i + 2;
    }

    puts("four");  //6
    i = 0;
    while(i <= 10)
    {
        printf("i = %d\n", i);
        i  = i + 2;
    }

    puts("five");  //5
    i = 1;
    while(i <= 10)
    {
        printf("i = %d\n", i);
        i = i + 2;
    }

    puts("six"); //4
    i = 1;
    while(i <= 10)
    {
        printf("i = %d\n", i);
        i = i * 2;
    }

    exit(0);
}