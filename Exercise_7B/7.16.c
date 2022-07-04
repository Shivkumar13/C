#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j;
    for(i = 0; i <= 8; ++i)
        for(j = i; j <= 8; ++j)
            printf("i=%d, j =%d\n", i, j);
    exit(0);
}

/*
Track i  = 0
    checking i <= 8: TRUE
        j = i
        Track j = 0
            checking j <= 8: TRUE
                i = 0, j = 0
        ++j
        Track j = 1
            checking j <= 8: TRUE
                i = 0, j = 1
        ++j
        Track j = 2
            checking j <=8 : TRUE
                i =0, j = 2
        ++j
        Track j = 3
            checking j <= 8: TRUE
                i = 0, j = 3
        ++j
        Track j = 4
            checking j <= 8: TRUE
                i = 0, j = 4
        ++j
        Track j = 5
            checking j <= 8: TRUE
                i = 0, j = 5
        ++j
        Track j = 6
            checking j <= 8: TRUE
                i = 0, j = 6
        ++j
        Track j = 7
            checking j <= 8: TRUE
                i = 0, j = 7
        ++j
        Track j = 8
            checking j <=8: TRUE
                i = 0, j = 8

++i: i = 1
    Track i = 1
        checking i < 8: TRUE
            Track j = 1
                checking j <= 8: TRUE
                    i = 1, j = 1
            ++j
            Track j = 2
                checking j <= 8: TRUE
                    i = 1, j = 2
            ++j
            Track  j = 3
                checking j <= 8: TRUE
                    i = 1, j = 3
            ++j
            Track j = 4
                checking j <= 8: TRUE
                    i = 1, j = 4
            ++j
            Track j = 5
                checking j <= 8: TRUE
                    i = 1, j = 5
            ++j
            Track j = 6
                checking j <= 8: TRUE
                    i = 1, j = 6
            ++j
            Track j = 7
                checking j <= 8: TRUE
                    i = 1, j = 7
            ++j
            Track j = 8:
                checking j <= 8: TRUE
                    i = 1, j = 8
            skip

++i: 
    Track i = 2

*/