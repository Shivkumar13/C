#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 16; i > 1; i = i -4)
        printf("i =%d\n", i);
    exit(0);
}
/*
Track i = 16
    Checking i > 1: 16 > 1: TRUE
        Execute body(printf("i=%d\n",i);)
i = 16

i = i -4: i = 16-4: i = 12

Track i = 12
    Checking i > 1: 12> 1: TRUE
        Execute body(printf("i=%d\n",i);)
i = 12

i = i - 4: i = 12 -4: i = 8

Track i = 8
    Checking i > 1: 8 > 1: TRUE
        Execute body(printf("i=%d\n", i);)
i = 8
i = i -4: i = 8 - 4: i = 4

Track i = 4
    Checking i > 1: 4 > 1: TRUE
        Execute body(printf("i =%d\n", i);)
i = 4
i = i -4: i = 4 - 4: i = 0

Track i = 0
    Checking i > 1: 0 > 1: FALSE
        
        exit(0);

*/