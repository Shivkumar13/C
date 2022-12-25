#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    for(i=0; i<10; ++i)
        printf("i=%d\n", i);
        exit(0);
}


/*
   Track 0:  i = 0
        Check i < 16: 0 < 16: TRUE
        Execute body (printf("i=%d\n", i);)

    Track 1: i = 1
        Check i < 16: 1 < 16 : TRUE
        Execute body (printf("i = %d\n", i);)

    Track 2: i = 2
        Check i < 16: 2 < 16: TRUE
        Execute body (printf("i = %d\n", i);)

    Track 3: i = 3
        Check i < 16: 3 < 15: TRUE
        Execute body (printf("i=%d\n", i);)
    
    Track 4: i = 4
        Check i < 16: 4 < 16: TRUE
        Execute body (printf("i=%d\n", i);)

    Track 5: i = 5
        Check i < 16: 5 < 16 : TRUE
        Execute body (printf("i=%d\n", i);)

    Track 6: i = 6
        Check i < 16: 6 < 16: TRUE
        Execute body (printf("i=%d\n", i);)
    
    Track 7: i = 7
        Check i < 16: 7 < 16: TRUE
        Execute body (printf("i=%d\n", i);)
    
    Track 8: i = 8
        Check i < 16: 8 < 16: TRUE
        Execute Body (printf("i=%d\n", i);)
    
    Track 9: i = 9
        Check i < 16: 9 < 16: TRUE
        Execute Body (printf("i=%d\n", i);)

    Track 10: i =10
        Check i < 16: 10 < 16: TRUE
        Excute Body (printf("i=%d\n", i);)

    Track 11: i = 11
        Check i < 16: 11 < 16: TRUE
        Execute Body (printf("i =%d\n", i);)
 
    Track 12: i = 12
        Check i < 16: 12 < 16: TRUE
        Execute Body (printf("i = %d\n", i);)

    Track 13: i = 13
        Check i < 16: 13 < 16: TRUE
        Execute Body (printf("i = %d\n", i);)

    Track 14: i = 14
        Check i < 16: 14 < 16: TRUE
        Execute Body (printf("i = %d\n", i);)
    
    Track 15: i = 15
        Check i < 16: 15 < 16: TRUE
        Execute Body (printf("i = %d\n", i);)

    Track 16: i = 16
        Check i < 16: 16 < 16: FALSE

        exit(0);
*/

/*
Output:

i=0
i=1
i=2
i=3
i=4
i=5
i=6
i=7
i=8
i=9
i=10
i=11
i=12
i=13
i=14
i=15

*/