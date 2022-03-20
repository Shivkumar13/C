#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i =0; i < 16; i += 3)
        printf("i =%d\n", i);
    exit(0);
}

/* 

Track i = 0
Check i < 16: 0 < 16 : TRUE
    Execute body: (printf("i =%d\n", i);)
 i =0 
i = i + 3: i = 0 + 3 : i =3

Track i = 3
Check i < 16: 3 < 16: TRUE
    Execute body: (printf("i =%d\n", i);)

i = 3
i = i + 3: i = 3 + 3: i = 6

Track i = 6
Check i < 16: 6 < 16: TRUE
    Execute body: (printf("i = %d\n", i);)

i = 6
i = i + 3: i = 6 + 3: i = 9

Track i = 9
Check i < 16: 9 < 16: TRUE
    Execute body: (printf("i = %d\n", i);)

i = 9
i = i + 3 : i = 9 + 3: i = 12

Track i = 12
Check i < 16 : 12 < 16: TRUE
    Execute body: (printf("i =%d\n", i);)

i = 12
i = i +3: i = 12 + 3: i = 15

Track i =15
Check i < 16: 15 < 16: TRUE
    Execute body: (printf("i =%d\n", i);)

i = 15
i = i + 3: i = 15 + 3: i = 18

Track i = 18
Check i < 16 : 18 < 16 : FALSE

    exit(0);

*/