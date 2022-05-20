#include <stdio.h>
#include <stdlib.h>

unsigned int num = 0xa0b0e0f0;

int main(void)
{

    printf("Address of the the num is %p\n", &num);

    for(int i = 0; i < sizeof(unsigned int); ++i)
    {
    printf("The byte by byte representation is %hhx and its address is %p\n", *(unsigned char*)(((char*)&num) + i), ((char*)&num) + i);
    }

    return (0);
}