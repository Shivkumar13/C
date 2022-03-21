#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i = 1; i < 16; i *= 6)
        printf("i = %d\n", i);
    exit(0);
}

/*
Track i = 1
    Checking i < 16; 1 < 16: TRUE
        Execute body(printf("i =%d\n", i);)
 i = 1

 i = i * 6: i = 1 * 6: i = 6

 Track i = 6:
    Checking i < 16: 6 < 16 : TRUE  
        Execute body(printf("i = %d\n", i);)
i = 6
i = i * 6 : i = 6 * 6: i = 36

Track i = 36    
    Checking i < 16: 36 < 16 : FALSE

        exit(0);

*/