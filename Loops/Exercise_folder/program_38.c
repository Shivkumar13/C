#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 16; i >0; i = i >> 1)
        printf("i = %d\n", i);
   // printf("1 >> 1= %d\n", 1 >> 1);
    exit(0);
}

/*
Track i = 16
    Checking i > 0: 16 > 0: TRUE
        Executing body(printf("i=%d\n", i);)
i = 16
i = i >> 1: i = 16 >> 1: i = 8

Track i = 8
    Checking i > 0: 8 > 0: TRUE
        Executing body(printf("i=%d\n", i);)
i = 8
i = i >> 1: i = 8 >> 1: i = 4

Track i = 4
    Checking i > 0: 4 > 0: TRUE
        Executing body(printf("i=%d\n", i);)
i = 4
i = i >> 1: i = 4 >> 1: i = 2

Track i = 2
    Checking i > 0: 2 > 0: TRUE
        Executing body(printf("i=%d\n", i);)
i = 2
i = i >> 1: i = 2 >> 1: i = 1

Track i = 1
    Checking i > 0: 1 > 0: TRUE
        Executing body(printf("i=%d\n", i);)
i = 1
i = i >> 1: i = 1 >> 1: i = 0

Track i = 0
    Checking i > 0: 0 > 0: FALSE

        exit(0);

*/