/*  
    Goal: Goal of this program is to have each byte 
    printed and that too with its address

*/
#include <stdio.h>
#include <stdlib.h>

unsigned long long int mynum = 0xa0b0c034c045b0de;

int main(void)
{
    printf("Address of the given number is %p\n", &mynum);

    for(int i = 0; i < sizeof(unsigned long long int); ++i)
    {
    printf("The address of the byte is %p and the Hex byte at that address is %hhx\n", (char*)&mynum + i,  *(unsigned char*)((char*)&mynum + i) );
    }

    return (0);


}