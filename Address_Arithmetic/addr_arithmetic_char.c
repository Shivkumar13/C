#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* ptr_char = (char*)4000;

    for(int i = 0; i < 10; ++i) 
        printf("ptr_char + %d = %llu\n", i, (unsigned long long int)(ptr_char+i));

    exit(0);
}