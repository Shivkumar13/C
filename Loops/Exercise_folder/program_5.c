#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=0; i < 16; i += 4)
        printf("i =%d\n", i);
    exit(0);
}

/* 
Track i = 0
Check i < 16: 0 < 16: TRUE
    Execute body (printf("i =%d\n", i);)

i = 0

i = i + 4: i = 0 + 4: i = 4

Track i = 4:
Check i < 16: 4 < 16: TRUE
    Execute Body (printf("i = %d\n",i);)

i = 4

i = i + 4: i = 4 + 4: i = 8

Track i = 8:
Check i < 16: 8 < 16: TRUE
    Execute body(printf("i =%d\n", i);)

i = 8

i = i + 4: i = 8 + 4: i = 12

Track i = 12
Check i < 16: 12 < 16: TRUE
    Execute body(printf("i = %d\n", i);)

i = 12

i = i + 4: i = 12 + 4: i = 16

Track i = 16
Check i < 16: 16 < 16: FALSE
    exit(0);
*/