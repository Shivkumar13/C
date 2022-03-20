#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 0; i < 16; i += 6)
        printf("i =%d\n", i);
    exit(0);
}

/*
Track i = 0
    Checking i < 16: 0 < 16 :TRUE
        Execute body (printf("i =%d\n", i);)
i = 0

i = i + 6: i = 0 + 6: i = 6

Track i = 6
    Checking i < 16: 6 < 16: TRUE
        Execute body (printf("i=%d\n", i);)
i = 6

i = i + 6: i = 6+6: i = 12

Track i =12
    Checking i < 16: 12 < 16: TRUE
        Execute body(printf("i=%d\n", i);)
i=12

i = i + 6: i = 12+6: i =18

Track i = 18
    Checking i < 18: 18 < 18: FALSE
        exit(0);
        
*/