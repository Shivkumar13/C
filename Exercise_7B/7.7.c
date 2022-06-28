#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 0; i < 16; ++i)
        for(j = 1; j < 128; j <<= 2)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*

Track i = 0
    chhecking  i < 16: TRUE
        Track j = 1:
            checking j < 128: TRUE
                i = 0, j = 1
        j <<= 2: j = j << 2: 1 << 2: 0001 << 2: 4
        Track j = 4:
            checking j < 128: TRUE
                i = 0, j = 4
        j <<= 2: j = j << 2: 4 << 2: 0100 << 2: 10000
        Track j = 16:
            checking j < 128: TRUE
                i = 0, j = 16
        j <<= 2: j = j << 2: 10000 << 2: 1000000
        Track j = 64
            checking j < 128: TRUE
                i = 0, j = 64
        j <<= 2: j = j << 2: 1000000 << 2 : 100000000
            checking j < 128: FALSE
                skip

Track i = 1
    checking i < 16: TRUE
        Track j = 1:
            checking j < 128: TRUE
                i = 1, j = 1
            j <<= 2: j = j << 2: 1 << 2: 0001 << 2: 0100
        Track j = 4:
            checking j < 128: TRUE
                i = 1, j = 4
            j <<=2 : j = j << 2: 4 << 2: 0100 << 2: 10000 
        Track j = 16:
            checking j < 128: TRUE
                i = 1, j = 16
            j <<=2 : j = j << 2: 16 << 2: 1000000
        Track j = 64:
            checking j < 128: TRUE
                i = 1, j = 64
        j <<= 2: j = j << 2: 64 << 2: 100000000
        Track j = 512
            checking j < 128: FALSe
            skip
Track i = 2
    checking i < 16: TRUE

*/