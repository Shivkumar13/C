#include <stdio.h>
#include <stdlib.h>

struct array_struct
{
    int array_of_integers[3];
    float array_of_float[10];
    char array_of_Chars[4];
};

int main(void)
{

    struct array_struct struct_ins1;
    struct array_struct* ptr_array_struct;

    ptr_array_struct = (struct array_struct*)2000;

    printf("Size of struct = %llu\n", sizeof(struct array_struct));
    
    for(int i=0; i < 10; ++i)
    {
        printf("Address Arithmetic for structure is %llu\n", (unsigned long long int)(ptr_array_struct + i));
        
    }

    exit(0);
}