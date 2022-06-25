#include <stdio.h>
#include <stdlib.h>


struct A
{
    int i;
    char c;
    float d;

};

void add_struct_func(struct A* something);

int main(void)
{
    struct A inA;

    inA.i = 2;
    inA.c = 'S';
    inA.d = 13.7;

    add_struct_func(&inA);

    puts("Value after passing the structure to the function are:");

    printf("Integer = %d, char=%c, float=%f\n", inA.i, inA.c, inA.d);
    exit(0);

}

void add_struct_func(struct A* hello)
{
    puts("I am inside function add_struct");

    printf("Value of integer is %d, value of character is %c, value of float is %f\n", hello->i, hello->c, hello->d);

    puts("Modifying the values of structure instance variables");

    hello->i = 3;
    hello->c = 'A';
    hello->d = 1.37;

}