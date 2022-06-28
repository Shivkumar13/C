#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 1; i < 100; i <<= 2)
        for(j = 4; j < 256; j <<= 3)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*
Track i = 1
    checking i < 100: TRUE
        Track j = 4 
            checking j < 256: TRUE
                i = 1, j = 4
        j <<= 3: 0100 << 3: 100000
        Track j = 32
            checking j < 256: TRUE
                i = 1, j = 32
        j <<= 3: j <<= 3: j = 256
        Track j = 256:
            checking j < 256: FALSE
            skip
Track i <<= 2 : i = 1 << 2 : i = 4
Track i = 4
    checking i < 100: TRUE
        Track j = 4: 
            checking j < 256: TRUE
                i = 4, j = 4
        j <<= 3: 4 << 3: 100000
        Track j = 64
            checkin j < 256: TRUE
                i = 4, j = 64
        j <<=3: 64 << 3: 100000000
        Track j = 512:
            cecking j < 256 : FALSE
                skip
i <<= 2: 4 << 2: 0100 << 2 : 10000
    Track i = 16
        checking i < 100: TRUE
        Track j = 4
            i = 16, j = 4
        j = 4 << 3: 0100 << 3 : 100000
        Track j = 64
            checking j < 256: TRUE
                i = 16, j = 64
        j <<= 3: 64 <<= 3: 512
            checking j < 256: FALSE
            skip
i <<= 2: 16 << 2: 10000 << 2: 1000000
        Track i = 64
            checking i < 100: TRUE
                i = 16, j = 4
            j <<= 3: 4 << 3: 0100 << 3: 100000
                j = 32
            Track j = 32
                j << 3: 100000000: j = 512
            False
i << 2: 64 << 2: 1000000 << 2: 100000000
        Track i = 512
            i < 100: FALSE
*/
