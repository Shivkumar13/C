#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 5; i >= 0; i = i-1)
        printf("i = %d\n", i);
    exit(0);
}


/*
Track i = 5:
    Checking i >= 0: 5 >= 0: TRUE
        Execute body(printf("i =%d\n", i);)
i = 5

i = i-1: i = 5 - 1: i = 4

Track i = 4
    Checking i >=0: 4 >= 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 4

i = i - 1: i = 4 -1: i = 3

Track i = 3
    Checking i >= 0: 3 >= 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 3

i = i -1: i = 3 -1: i = 2

Track i = 2:
    Checking i >= 0: 2 >= 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 2

i = i - 1: i = 2 - 1: i = 1

Track i = 1
    Checking i >= 0: 1 >= 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 1

i = i -1 : i = 1 - 1: i = 0

Track i = 0
    Checking i = 0: i >= 0: TRUE
        Execute body(printf("i=%d\n",i);)
i = 0

i = i -1: i = 0 - 1: i = -1

Track i = -1
    Checking i = -1: -1 >= 0: FALSE

        exit(0); 
*/
