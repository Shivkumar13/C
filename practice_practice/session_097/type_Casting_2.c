#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    unsigned int num = 0xa0b0c0d0;
    unsigned char x;

    x = (unsigned char)num;

    /*
    rhs type: unsigned int -> 4 byte
    lhs type: unsigned char -> 1 byte
    lhs type != rhs type;
    */

   printf("x = %hhx\n", x);

   return(0);

}

/* 
    unsigned char u = 1;
    short s_int;
    int i;
    long long int lng_num;

    lng_num = u; //1
    lng_num = s_int; 2
    lng_num = i; //4
*/