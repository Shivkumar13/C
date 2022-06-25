#include <stdio.h>
#include <stdlib.h>

double d_arr[5] = {4.56, 65.34, 543.45, 453.32, 23.45};
double* p_d;
int i;

int main(void)
{
    p_d = &d_arr[0];

    puts("Accessing elements through pointer:");
    for(i =0; i<5; ++i)
        {
            printf("Array of double, elements at index %d = %lf\n", i, *(p_d + i));
        }

    puts("Modifying elements through pointer:");
    for(i=0; i < 5; ++i)
        {
            *(p_d+i) = (i+1) * 2.3;
        }
    
    puts("Accessing the modified elements through pointer:");
    for(i=0; i < 5; ++i)
        {
            printf("Array of elements are %d = %lf\n", i, *(p_d +i));
        }
    
    exit(0);

}