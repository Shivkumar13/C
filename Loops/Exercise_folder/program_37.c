#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 16; i > 0; i = i /1)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 16:
    Checking i > 0: 16 > 0: TRUE
        Execute body(printf("i=%d\n", i);)
i = 16 

i = i / 1: i = 16 / 1: i = 16

Track i = 16

i's value would not chage as it is divided by 1 only, so
loop will be infinite.


*/