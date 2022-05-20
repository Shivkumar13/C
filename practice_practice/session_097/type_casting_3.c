    #include <stdio.h>
#include <stdlib.h>

unsigned int num = 0xa0b0c0d0;


/*
x   x+1   x+2  x+3
d0  c0    b0   a0
*/

int main(void)
{

        unsigned int i;
        unsigned char uc;

        printf("&num = %p\n", &num);
        printf("&num + 1 = %p\n",  ((char*)&num) + 1);

        puts("with for loop");
        
        for(i = 0; i < sizeof(unsigned int); ++i)
        {
            printf("Elements are %hhx, Address of bytes are %llu\n", *(unsigned char*)((char*)&num + i), (unsigned long long int)(char*)&num + i);
        }


        return(0);

}