#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int hex_number = 0xb0d0c0f0;
    unsigned char char_1;

    char_1 = (unsigned char)hex_number;
    printf("char_1 = %hhx\n", char_1);

    return(0);
}