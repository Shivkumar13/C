#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 0; i < 8; ++i)
        for(j = 8; j > 8; --j)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*
Track i = 0
    checking i < 8: TRUE
        Track j = 8
            checking j > 8 : FALSE
                skip

*/