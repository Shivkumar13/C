#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    short* short_ptr = (short*)1000;

    for(int i=0; i < 5; ++i)
        printf("Address of short integers are %llu\n",short_ptr + i);

    exit(0);
}