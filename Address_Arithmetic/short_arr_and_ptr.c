#include <stdio.h>
#include <stdlib.h>

short s_arr[] = {100,200,300,400,500};
int i;

void show(short* p);

int main(void)
{
     puts("printing the short array:");

     for(i=0; i < 5; ++i)
        {
            printf("s_arr[%d] = %hd\n", i, s_arr[i]);
        }
    
      puts("Modifying the array  with indexes:");

      for(i=0; i < 5; ++i)
        {
            s_arr[i] = s_arr[i] + 10 * i;
            printf("s_arr[%d] = %d\n", i, s_arr[i]);
        }
    
    show(&s_arr[0]);

    exit(0);

}

void show(short* p)
{
    for(i = 0; i < 5; ++i)
        {
            printf("Elements of array as index %d are %hd\n", i, *(p+i));
        }
}