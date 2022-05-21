#include <stdio.h>
#include <stdlib.h>

unsigned long long int num = 0x10a020b030c040d0; 

int main(void)
{
    
    printf("Address of num is %p\n", &num);

    unsigned char n1; // B1
    unsigned short int n2; // B2, B3
    unsigned int n3; // B4, B5, B6, B7
    unsigned char n4; // B8

    n1 =    *(char*)&num + 0;
    printf("B1 = %hhx, Addr = %llu\n", n1, (unsigned long long int)(char*)&num + 0);

    n2 =  *(unsigned short int*)(((char*)&num) + 1);
    printf("B2,B3 = %hx, Addr = %llu\n", n2, (unsigned long long int)(char*)&num + 1);

    n3 =  *(unsigned int*)(((char*)&num) + 3);
    printf("B4,B5,B6,B7 = %x, Addr = %llu\n", n3, (unsigned long long int)((char*)&num) + 3);

    n4 =  *(unsigned char*)(((char*)&num) + 7);
    printf("B8 = %hhx, Addr = %llu\n", n4, (unsigned long long int)((char*)&num) + 7);

    return 0;
}