#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=0; i < 16; i += 9)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 0
    Checking i < 16: 0 < 16 : TRUE
        Execute body (printf("i = %d\n", i);)
i = 0

i = i + 9: i = 0 + 9: i = 9

Track i = 9
    Checking i < 16: 9 < 16: TRUE
        Execute body(printf("i =%d\n", i))
i = 9

i = i + 9: i = 9 + 9: i = 18

Track i = 18
    Checking i < 18: 18 < 18: FALSE
        exit(0);

*/

