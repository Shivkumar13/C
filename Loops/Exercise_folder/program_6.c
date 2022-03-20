#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=0; i < 16; i += 5)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 0
    Check i < 16: 0 < 16: TRUE
        Execute body (printf("i=%d\n", i);)
i = 0

i = i + 5: i = 0 +5 : i = 5

Track i = 5
    Check i < 16: 5 < 16: TRUE
        Execute body(printf("i =%d\n", i);)
i = 5

i = i +5: i = 5 + 5: i = 10

Track i =10
    Check i < 16: 10 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 10

i = i + 5: i = 10 + 5: i = 15

Track i = 15
    Check i < 16: 15 < 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 15

i = i + 5: i = 15 + 5: i =20
    Check i < 16: 20 < 16: FALSE
    
    exit(0);
*/