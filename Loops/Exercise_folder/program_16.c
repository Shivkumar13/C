#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i =1; i < 16; i *= 7)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 1
    Checking i < 16: 1 < 16: TRUE
        Execute body (printf("i = %d\n", i);)
i = 1

i = i * 7: i = 1* 7: i = 7

Track i = 7
    Checking i < 16: 7 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 7
i = i * 7: i = 7 * 7: i = 49

Track i = 49
    Checking i < 49: 49 < 49 : FALSE

        exit(0);

*/
