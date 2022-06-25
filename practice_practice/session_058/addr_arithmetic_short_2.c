#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short* l = (short*)1000;
     int i;

     for(i=0; i<5;++i)
        printf("l + %d = %llu\n", i, (unsigned long long int)(l+i));
    
    exit(0);
}