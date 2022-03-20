#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 1; i < 16; i *= 5)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 1
    Checking i < 16: 1 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 1

i = i * 5: i = 1 * 5: i = 5

Track i = 5
    Checking i < 16: 5 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 5

i = i * 5: i = 5 *5 : i= 25

Track i = 25
    Checking i < 25: 25 < 25 : FALSE
        
        exit(0);

*/