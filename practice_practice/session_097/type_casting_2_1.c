#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int hex_num = 0xd0a0c0f0;
    unsigned char c;

    c = (unsigned char)hex_num;   //Read first 1 byte from hex_num and write to c 

    printf("c = %hhx\n", c); // This should print f0

    return(0);
}