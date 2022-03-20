#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=0; i < 16; i += 7)
        printf("i =%d\n", i);
    exit(0);
}

/*
Track i =0
    Checking i < 16: 0 < 16: TRUE
        Execute body (printf("i=%d\n", i);)
i = 0

i = i + 7: i = 0 + 7: i = 7

Track i = 7
    Checking i < 16: 7 < 16: TRUE
        Execute body(printf("i =%d\n", i);)
i = 7

i = i + 7 : i = 7 + 7: i = 14

Track i = 14
    Checking i < 16: 14 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 14

i = i + 7: i = 14 + 7: i = 21

Track i = 21
    Checking i < 16: 21 < 16 : FALSE
        exit(0);

*/