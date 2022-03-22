#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    short* short_ptr = (short*)1000;

    for(int i=0; i < 5; ++i)
        printf("short_ptr + %d = %llu\n",i, (unsigned long long int)(short_ptr + i));

    exit(0);
}