#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    int arr_int[5];
    struct B
    {
        int a;
        float f;
        int arr[5];
    }inB;
    float c;
    struct C
    {
        int h;
        float f;
        char char1;
    }inC;
} inA = {
    3,
    'C',
    {3, 4, 56, 34534, 45},
    {
        56, 56.665, {1, 2, 3, 4, 5}
    },
    4.5,
    {
        12345, 345.234, 'Z'
    }
};

int main(void)
{

    int i;
    int j;
    struct A arr[4] = {
        {
            2, 
            'D',
            {356, 44, 56, 34534, 45},
            {
                12, 345, {5,6,7,8,9}
            },
            7.8,
            {
                456, 234.454, 'H'
            }
        },
        {
            45,
            'P',
            {93, 47, 56, 345344, 445},
            {
                1246, 5.7978, {2, 3, 4, 6, 8}
            },
            4.789,
            {
                34, 45.67, 'S'
            }
        },
        {
            4, 
            'O',
            {36, 42, 564, 354534, 455},
            {
                34, 234, {2, 6, 7, 8 ,9}
            },
            6.98,
            {
                123, 213.34, 'G'
            }
        },
        {
            34,
            'G',
            {1098, 56, 46, 344, 65},
            {
                12, 2345.423, {9, 8, 63, 2, 7}
            },
            98.54,
            {
                125, 213.234, 'Y'
            }
        }

};

    puts("Viewing the struct and its members along with the member array elements:");
    for(i = 0; i < 4; ++i)
    {
        printf("printing values from parent struct first: %d %c %f\n", arr[i].a, arr[i].b, arr[i].c); 
        for(j = 0; j < 5; ++j)
            {
                printf("Parent array printing: %d\n", arr[i].arr_int[j]);
            }

    puts("=================================");
        
        for(j = 0; j < 5; ++j)
        {
        printf("printing the values from the nested struct's array: at index %d is %d\n", j, arr[i].inB.arr[j]);
        printf("printing the values from the nested struct's array: at index %d is %d\n", j, arr[i].inC.h);
        }

    }
    exit(0);
    
}