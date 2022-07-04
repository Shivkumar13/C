#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 0; i<= 8; ++i)
        for(j = i; j < 8; ++j)
            printf("i = %d, j = %d\n", i , j);
    exit(0);
}

/*
Track i = 0:
    checking i <= 8: TRUE
        checking j = i
        Track j = 0
            checking j < 8: TRUE
                i = 0, j = 0
        ++j
        Track j = 1
            checking j < 8: TRUE
                i = 0, j = 1
        ++j
        Track j = 2
            checking j < 8: TRUE
                i = 0, j = 2
        ++j
        Track j = 3
            checking j < 8: TRUE
                i = 0, j = 3
        ++j
            checking j < 8
                i = 0, j = 4
        ++j
            i = 0, j = 5
        ++j 
            i = 0, j = 6
        ++j
            i = 0, j = 7
        ++j 
            checking 8 < 8: FALSE
            skip

Track i = 1:
    checking i <= 8: TRUE
        j = i
        Track j = 1
        i = 1, j = 1
        ++j
        Track j = 2
        i = 1, j = 2
        ++j
        Track j = 3
        i = 1, j = 3
        ++j
        Track j = 4
        i = 1, j = 4
        ++j
        Track j = 5
        i = 1, j = 5
        ++j
        Track j = 6
        i = 1, j = 6
        ++j
        Track j = 7
        i = 1, j = 7
        ++j
        Track j = 8
        8 is not less than 8
        skip

++i: Track i = 2
    checking i <= 8: TRUE
        j = i
        j = 2
        checking j < 8: TRUE
            i = 2, j = 2
    Track j < 8: TRUE
        checking j < 8: TRUE
            i = 2, j = 3
    ++j
    Track j < 8: TRUE
        checking j < 8: TRUE
            i = 2, j = 4
    ++j
    Track j < 8: TRUE
        checking j < 8: TRUE
            i = 2, j = 5
    ++J
    Track j < 8: TRUE
        checking j < 8: TRUE
            i = 2, j = 6
    ++j
    Track j < 8: TRUE
        checking j < 8: TRUE
            i = 2, j = 7
    ++j
    Track j < 8: FALSE
    skip

++i Track i = 3
        checking i <= 8: TRUE
        j = i
        j = 3
        checking j < 8; TRUE
            i = 3, j = 3
        ++j
        checking j < 8:
            i = 3, j = 4
        ++j
        checking j < 8:
            i = 3, j = 5
        ++j
        checking j < 8:
            i = 3, j = 6
        ++j
        checking j < 8: 
            i = 3, j = 7
        ++j
        j < 8: FALSE
        skip
    
++i Track i = 4
    checking i <= 8: TRUE
    j = i
    j = 4
    Track j = 4
        checking j < 8: TRUE
            i = 4, j = 4
        ++j
        checking j < 8: TRUE
            i = 4, j = 5
        ++j
        checking j < 8: TRUE
            i = 4, j = 6
        ++j
        checking j < 8: TRUE
            i = 4, j = 7
        ++j
        checking j < 8: FALSE
        skip

++i Track i = 5
    checking i <= 8: TRUE
    j = i
    j = 5
    Track j = 5
        checking j < 8: TRUE
            i = 5, j = 5
        ++j
        checking j < 8: TRUE
            i = 5, j = 6
        ++j
        checking j < 8: TRUE
            i = 5, j = 7
        ++j
        checking j < 8: FALSE
        skip

++i Track i = 6
    chcking i <= 8: TRUE
        j = i
        Track j = 6
        checking j < 8: TRUE
        i = 6, j = 6
        ++j
        checking j < 8: TRUE
        i = 6, j = 7
        ++j
        j = 8 : j < 8: FALSE
        skip

++i Track i = 7
    checking i <= 8: TRUE
        j = i
        j = 7
        checking j < 8: TRUE
            i = 7, j = 7
        ++j
        checking j < 8: FALSE
        skip

++i Track i = 8
    checking i <= 8: TRUE
        j = 8
        checking j < 8: FALSE
        Skip 

*/