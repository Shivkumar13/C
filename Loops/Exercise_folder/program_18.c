#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 1; i < 16; i *= 9)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 1 
    Checking i < 16: 1 < 16: TRUE
        Execute body (printf("i = %d\n", i);)
i = 1
i = i * 9: i = 1 * 9: i = 9

Track i = 9
    Checking i < 16L: 9 < 16: TRUE
        Execute body(printf("i =%d\n", i);)
i = 9
i = i * 9: i = 9 * 9: i = 81

Track i = 81:
    Checking i < 16: 81 < 16: FALSE

            exit(0);
*/