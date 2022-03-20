#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 0; i < 16; i *= 3)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 0
    Checking i < 16: 0 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i =0

i = i * 3: i = 3 * 3: i = 9


Track i = 9 
    Checking i < 16: 9 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 9

i = i * 3: i = i * 3: i = 9 *3 : i = 27

Track  i = 27
    Checking i < 16: 27 < 16: FALSE
        exit(0);

*/