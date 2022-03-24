#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 16; i > 0; i = i - 2)
        printf("i=%d\n", i);
    exit(0);
}

/*
Track i = 16
    Checking i > 0: 16 > 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 16
i = i -2: i = 16 - 2: i = 14

Track i = 14
    Checking i > 0: 14> 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 14
i = i -2: i = 14-2: i = 12

Track i = 12
    Checking i > 0: 12 > 0: TRUE
        Execute body(printf("i =%d\n", i);)
i = 12
i = i -2: i= 12 - 2: i = 10

Track i = 10    
    Checking i > 0: 10> 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 10
i = i -2: i = 10 -2: i = 8

Track i = 8
    Checking i>0: 8 > 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 8
i = i -2: i = 8 -2: i = 6

Track i = 6
    Checking i > 0: 6 > 0: TRUE
        Execute body(printf("i =%d\n", i);)
i = 6

i = i -2: i  = 6 -2: i = 4

Track i = 4
    Checking i> 0: 4 > 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 4

i = i -2: i = 4 - 2: i = 2

Track i = 2
    Checking i > 0: 2 > 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 2:

i = i -2: i = 2 - 2: i = 0

Track i = 0
    Checking i > 0: 0 > 0 : FALSE

        exit(0);

*/