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
    struct A first_instance_of_struct_A_with_array[4] = {
        {3, 'A', 1.5},
        {4, 'y', 5.6},
        {4, 'm', 4.5},
        {2, 't', 6.7},
        
    };

    for(i = 0; i < 4; ++i)
    {
        printf("values at index[%d]: %d %c %f\n", i, first_instance_of_struct_A_with_array[i].a, first_instance_of_struct_A_with_array[i].b, first_instance_of_struct_A_with_array[i].c);
    }

    exit(0);
}
