#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=0; i < 16; i += 8)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 0
    Checking i < 16: 0 < 16: TRUE
        Execute body (printf("i=%d\n", i);)
i = 0

i = i + 8: i = 0 + 8: i = 8

Track i = 8
    Checking i < 16: 8 < 16: TRUE
        Execute body (printf("i =%d\n", i);)
i = 8

i = i + 8: i = 8 + 8: i = 16

Track i = 16
    Checking i < 16: 16 < 16 : FALSE
        exit(0);

*/