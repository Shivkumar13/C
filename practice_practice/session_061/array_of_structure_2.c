#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float c;
};

int main(void)
{
    int i;
    struct A struct_arr[4] = {
        {4, 'H', 6.7},
        {5, 'Y', 7.8},
        {3, 'O', 5.4},
        {3, 'T', 7.9},
    };

    for(i = 0; i < 4; ++i)
    {
        printf("Values of Members of structure in the array: at index [%d] = %d\t%c\t%f\n", i, struct_arr[i].a, struct_arr[i].b, struct_arr[i].c);
    }

    exit(0);
}