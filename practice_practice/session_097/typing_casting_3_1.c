/*
    Author: Shivkumar Ople
    Goal: To print each byte and its address in the given hexadecimal number.
    Copyright @ Shivkumar Ople
*/
#include <stdio.h>
#include <stdlib.h>

unsigned int hex_num = 0xf0f0a0b0;

int main(void)
{
    int i;
    printf("Address of the given number is %p\n", &hex_num);


    for(i = 0; i < sizeof(unsigned int); ++i )
    {
    printf("Printing each digit by byte fashion %hhx has address as %p\n", *(unsigned char*)(((char*)&hex_num) + i), (char*)&hex_num + i);
    }

    return(0);
    

}