#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=1; i <= 16; i = i <<2)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 1
    Checking i <= 16: 1 <= 16: TRUE
        Execute body(printf("i=%d\n", i);)
i = 1

i = i << 2: i = 1 << 2: i = 4

Track i = 4
    Checking i <= 16: 4 <= 16: TRUE
        Execute body(printf("i=%d\n", i);)
i = 4

i = i << 2: i = 4 << 2: i = 16

Track i = 16
    Checking i <= 16: 16<= 16: TRUE
        Execute body(printf("i=%d\n", i);)
i = 16

i = i << 2: i = 16 << 2: i = 64

Track i = 64
    Checking i <= 64: 64 <= 16: FALSE
        exit(0);

*/