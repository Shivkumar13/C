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
    struct A arr[5] = {
        {1, 'A', 3},
        {2, 'A', 8},
        {2, 'M', 4},
        {0, 'P', 8},
    };

    for(i = 0; i < 5; ++i)
    {
        printf("%d\t%c\t%f\n", arr[i].a, arr[i].b, arr[i].c);
    }

    exit(0);

}