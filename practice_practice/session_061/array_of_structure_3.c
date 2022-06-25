#include <stdio.h>
#include <stdlib.h>

struct A
{
    unsigned long long int my_ulonglongint;
    double d_double;
    unsigned short s_short;
};

int main(void)
{
    int i;
    struct A big_array_of_datatypes[4] = {
        {353654432, 565.757, 234},
        {3453631235, 554.3436, 231},
        {24164, 454.5434, 211},
        {234356645,2546.54, 235},        
    };

    for(i = 0; i < 4; ++i)
    {
        printf("Values of Members of struct elements at index [%d] = %llu %lf %hu\n", i, big_array_of_datatypes[i].my_ulonglongint, big_array_of_datatypes[i].d_double, big_array_of_datatypes[i].s_short);
    }

    exit(0);
}