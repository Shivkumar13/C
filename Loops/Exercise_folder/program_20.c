#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 1; i < 16; i = i << 3)
        printf("i =%d\n", i);
    exit(0);
}

/*
Track i =1
    Check i < 16: 1 < 16: TRUE
        Execute body (printf("i = %d\n", i);)
i = 1

i = i << 3: i = 1 << 3: i = 8

Track i = 8
    Check i < 16: 8< 16 : TRUE
        Execute body(printf("i=%d\n", i);)
i = 8

i = i << 3: i = 8 << 3: FALSE

Track i = 64
    Check i < 16: 64 < 16: FALSE

*/
