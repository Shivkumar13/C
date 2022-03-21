#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 1; i < 16; i *= 8)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 1
    Checking i< 16 : 1 < 16: TRUE
        Execute body (printf("i = %d\n", i);)
i = 1

i = i * 8: i = 1 * 8 : i = 8

Track i = 8
    Checking i < 16: 8 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 8

i = i * 8: i = 8 * 8: i = 64

i = 64
    Checking i < 16: 64 < 16: FALSE
        exit(0);

*/