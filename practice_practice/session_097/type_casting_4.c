#include <stdio.h>
#include <stdlib.h>


unsigned long long int num = 0x10a020b030c040d0; 

int main(void)
{

    unsigned char n1; // B1
    unsigned short int n2; // B2 B3
    unsigned int n3; // B4 B5 B6 B7
    unsigned char n4; // B8

    puts("Printing B1");

    n1 = *(char*)&num + 0;
    printf("n1 = %hhx, B1 Address = %p\n", n1, (char*)&num + 0);

    n2 = *(unsigned short int*)((char*)&num + 1);
    printf("n2 = %hx, B2,B3 Address = %p\n", n2, ((char*)&num +1));

    n3 = *(unsigned int*)((char*)&num + 3);
    printf("n3 = %x, B4, B5, B6, B7 Address = %p \n", n3, ((char*)&num) + 3);

    n4 =   *(unsigned char*)(((char*)&num) + 7);
    printf("n4 = %hhx, B8 Address = %p\n", n4, (char*)&num + 7);

    return(EXIT_SUCCESS);
}