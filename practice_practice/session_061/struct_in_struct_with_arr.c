#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float arr[4];
    struct nested_struct{
        int arr[5];
        char c;
        float d;
    }inNested;
    unsigned long int c;
}inMain;

int main(void)
{
    int i;
    int j;
    struct A inMain = {
        4,
        'V',
        {4.5, 4.6, 4.7, 4.8},
         {
             {5,6, 7,8, 9},
             'C',
             4.888,
         },
        21435365,
    };

    puts("Printing the Main Struct Member values");
    printf("Structure A elements: %d, %c, %llu\n", inMain.a, inMain.b, inMain.c);

    for(i = 0; i < 4; ++i)
    {
        printf("struct A: float array arr[%d] = %f\n", i, inMain.arr[i]);
    }

    puts("Printing the Nested Struct Member Values");
    puts("1. Array Values inside nested struct");
    for(j = 0; j < 5; ++j)
    {
        printf("struct nested_struct values at index %d = %d\n", j, inMain.inNested.arr[j]);
    }

    puts("2. Printing the element values without array in Nested struct");
    printf("Members of structure instances: %c %f\n", inMain.inNested.c, inMain.inNested.d);

    exit(0);
}