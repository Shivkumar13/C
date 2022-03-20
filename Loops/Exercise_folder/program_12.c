#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 1; i < 16; i *= 3)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 1
    Checking i < 16: 1 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 1

i = i * 3: i = 1 * 3: i = 3


Track i = 3 
    Checking i < 16: 3 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 3

i = i * 3: i = 3 * 3: i = 3 *3 : i = 9

Track  i = 9
    Checking i < 16: 9 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 9

i = i * 3 :i= 9 * 3: i = 27

Track i = 27
    Checking i < 16: 27 < 16: FALSE
        Execute body(printf("i = %d\n", i);)
        
        exit(0);

*/