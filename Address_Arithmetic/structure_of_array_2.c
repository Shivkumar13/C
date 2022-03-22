#include <stdio.h>
#include <stdlib.h>

struct amey_struct_of_array
{
    int shiv[5];
    float arjun[5];
    char anil[5];
    long int p_ople[5];
};

int main(void)
{

    struct amey_struct_of_array ople_instance;
    struct amey_struct_of_array* ptr_oples;

    ptr_oples = &ople_instance;

    for(int i = 0; i < 5; ++i)  
    {
        ptr_oples->shiv[i] = 1 * i;
        printf("ptr_oples->shiv[%d] = %d\n", i, ptr_oples->shiv[i]);
    }
    
    for(int i = 0; i < 5; ++i)
    { 
        ptr_oples->arjun[i] = 2.666 * i;
        printf("ptr_oples->arjun[%d] = %f\n", i, ptr_oples->arjun[i]);
    }

    for(int i = 0; i < 5; ++i)  
    {
        ptr_oples->anil[i] = 'a' + 2*i;
        printf("ptr_oples->anil[%d] = %d\n", i, ptr_oples->anil[i]);
    }

    for(int i = 0; i < 5; ++i)
    {
        ptr_oples->p_ople[i] = 137 * i;
        printf("ptr_oples->p_ople[%d] = %d\n", i, ptr_oples->p_ople[i]);
    }

    exit(0);
}