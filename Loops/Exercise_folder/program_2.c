#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=0;i < 16; i = i+2)
        printf("i=%d\n", i);
    exit(0);
}

/*
Track 0: i = 0
    Check i < 16: 0 < 16: TRUE
    Execute body (printf("i=%d\n", i);) 
    
    o/p: i = 0
    
    i = i + 2: i = 0 + 2: i =2

Track 1: i = 2
    Check i < 16: 2 < 16: TRUE
    Execute body (printf("i=%d\n", i);)

    o/p: i = 2

    i = i + 2: i = 2 + 2: i = 4

Track 2: i = 4
    Check i < 16: 4 < 16: TRUE
    Execute body (printf("i = %d\n", i);)

    o/p i = 4

    i = i + 2: i = 4 + 2: i = 6

Track 3: i = 6
    Check i < 16: 6 < 16: TRUE
    Execute body (printf("i=%d\n", i);)

    o/p i = 6

    i = i + 2: i = 6 + 2: i = 8

Track 4: i = 8
    Check i < 16: 8 < 16: TRUE
    Execute body (printf("i=%d\n", i);)

    o/p i = 8

    i = i +2 : i = 8 + 2: i =10

Track 5: i = 10
    Check i < 16: 10 < 16: TRUE
    Execute body (printf("i=%d\n", i);)

    o/p i = 10

    i = i + 2: i = 10 + 2: i = 12

Track 6: i = 12
    Check i < 16: 12 < 16: TRUE
    Execute body (printf("i =%d\n", i);)

    o/p i = 12

    i = i + 2; i = 12 + 2; i = 14

Track 7: i = 14
    Check i < 16: 14 < 16: TRUE
    Execute body (printf("i = %d\n", i);)

    o/p i = 14

    i = i + 2: 14 + 2: 16

Track 8: i = 16
    Check i < 16: 16 < 16: FALSE

    exit(0);
*/