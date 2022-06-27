#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i, j; 
    for(i = 0; i < 16; i += 3)
        for(j = 0; j < 128; j *= 3)
            printf("i=%d, j =%d\n", i, j);

    exit(0);  
}

/*
Track i = 0
    Checking i < 16: TRUE
        Track j = 0: 
           i = 0, j = 0
        j = j * 3: j = 0 * 3
            i = 0, j = 0
        
    Inifinity loop


*/