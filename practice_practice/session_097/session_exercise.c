#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int num = 0xa0b0c0d0;

    unsigned char c;
    
    c = (unsigned char)num;

    printf("The content in first byte is %hhx\n", c);
    printf("&num = %p\n", &num);

    printf("Address of c is %p\n", &num);

    //printf("Address of second byte is ");
    
    printf("Address of num is %p\n", &num);


    // unsigned char d;
    // d = (unsigned )

    return(0);
}