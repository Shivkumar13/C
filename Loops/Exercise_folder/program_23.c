#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=1; i <=16; ++i)
        printf("i=%d\n",i);
    exit(0);
}

/*
Track i = 1
    Checking i <=16: 1 <= 16: TRUE
        Execute body(printf("i = %d\n", i);)
i = 1

++i: i = 2

Track i = 2
    Checking i <= 16: 2 <= 16: TRUE
        Execute body(printf("i=%d\n", i);)
i = 2

++i: i = 3

Track i = 3
    Checking i <=16: 3 <= 16: TRUE
        Execute body(printf("i=%d\n", i);)
i = 3

++i: i = 4

Track i = 4
    Checking i <= 16: 4 <=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 4

++i: i = 5

Track i = 5
    Checking i <=16: 5 <=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 5

++i: i = 6

Track i = 6
    Checking i <=16: 6 <=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 6

++i: i = 7

Track i = 7
    Checking i <=16: 7 <=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 7

++i: i = 8

Track i = 8
    Checking i <=16: 8<=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 8

++i: i = 9

Track i= 9
    Checking i <=16: 9 <=16: TRUE
        Executing body(printf("i=%d\n",i);)
i = 9

++i: i =10

Track i = 10
    Checking i <=16: 10<=16: TRUE
        Executing body(printf("i=%d\n, i");)
i = 10

++i: i = 11

Track i = 11
    Checking i <= 16: 11<=16: TRUE
        Executing body(printf("i=%d\n", i);)
i=11

++i: i = 12

Track i = 12
    Checking i <=16: 12<=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 12

++i: i = 13

Track i = 13
    Checking i <=16: 13<=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 13

++i: i =14

Track i = 14
    Checking i<=16: 14<=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 14

++i: i = 15

Track i = 15
    Checking i <=16: 15<=16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 15

++i: i = 16
    Checking i <=16: 16 <= 16: TRUE
        Executing body(printf("i=%d\n", i);)
i = 16

++i: i = 17

Track i = 17
    Checking i <=16: 17<=16: FALSE
        Executing body(printf("i=%d\n", i);)

    exit(0);
*/