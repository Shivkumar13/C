#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 0; i < 100; i = i * 2)
        for(j = 100; j > 0; --j)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*
Track i = 0
    checking i < 100: TRUE
        Track j = 100:
            checking j > 0: TRUE
                i = 0, j = 100
        --j: j = 99
        Track j = 99
            checking j > 0: TRUE
                i = 0, j = 99
        Track j = 98
            checking j > 0 : TRUE
                i =0, j = 98
        Track j = 97
            checking j > 0: TRUE
                i = 0, j = 97
        Track j = 96
            checking j > 0: TRUE
                i = 0, j = 96
        Track j = 95
            checking j > 0: TRUE
                i = 0, j = 95
        Track j = 94:
            checking j > 0: TRUE
                i =0, j = 94
        Track j = 93
            checking j > 0: TRUE
                i = 0, j = 93
        Track j = 92:
            checking j > 0: TRUE
                i =0, j = 92
        Track j = 91:
            checking j > 0: TRUE
                i =0, j = 91
        Track j = 090:
            checking j > 0: TRUE
                i = 0, j = 90
                


*/