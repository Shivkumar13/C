#include <stdio.h>
#include <stdlib.h>

struct struct_arr
{
   int a[4];
   char c[5];
   float f[4];

};

int main(void)
{
     struct struct_arr inS;
     struct struct_arr* struct_ptr;

     struct_ptr = &inS;

     for(int i =0; i < 4; ++i)
        {
            struct_ptr->a[i] = 10 * i;
            printf("struct_ptr->a[%d]= %d\n",i, struct_ptr->a[i]);
        }

     for(int i=0; i < 5; ++i)
        {
            struct_ptr->c[i] = 'A' + i;
            printf("struct_ptr->c[%d]= %d\n", i, struct_ptr->c[i]);
        }

     for(int i=0; i < 4; ++i)
        {

            struct_ptr->f[i] = 13.7 * (i * 100);
            printf("struct_ptr->f[%ld]= %f\n", i, struct_ptr->f[i]);  //Check this
        }

      exit(0);
}