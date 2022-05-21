#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=16; i>0; i = i >>3)
        printf("i=%d\n", i);
    exit(0);
}

/*
Track i = 16
    Checking i > 0: 16 > 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 16

i = i >> 3: i = 16 >> 3: i = 2

Track i = 2
    Checking i > 0: 2 > 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 2

i = i >> 3: i = 2 >> 3: i = 0

Track i = 0
    Checking i > 0: 0 > 0: FALSE
        exit(0);

*/