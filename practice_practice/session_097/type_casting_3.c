#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned int hex_num = 0xa0b0c0d0;
    unsigned short s_int;

    s_int = (unsigned short)hex_num;
    printf("s_int = %hx\n", s_int);

    return(0);
}