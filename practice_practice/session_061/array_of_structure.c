#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float c;
};


/* exercise */ 
/* 
    Define array arr of size 4 of struct A 
    and initialize elements at all indices 
    of that array 

    print the array using for loop 
*/ 

int main(void)
{
    //struct A arr[4];
    int i;

    struct A arr[4] = {
        {3, 'c', 4.5},
        {4, 'b', 5.6},
        {3, 'a', 5.8},
        {2, 't', 5.9},
    };

    for(i = 0; i < 4; ++i)
    {
        printf("%d\t%c\t%f\n", arr[i].a, arr[i].b, arr[i].c);
    }

    exit(0);

}