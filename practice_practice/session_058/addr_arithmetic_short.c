#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    short* p = (short*)1000;
    int i;
    for(i = 0; i < 5; ++i)
    {
        printf("p + %d = %llu\n", i, (unsigned long long int)(p+i));

    }

    exit(0);

}


/*

p + 0 = address in p + 0 = 1000
Wrong Answers!

p + 1 = 1001
p + 2 = 1002
p + 3 = 1003
p + 4 = 1004

Pointer Arithmetic != Mathematical Arithmetic
char* p = 1000;
short* ps = 1000;

*/