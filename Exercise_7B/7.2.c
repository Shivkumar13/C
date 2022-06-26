#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i , j;
    for(i = 0; i< 8; i +=2)
        for(j =0; j < 8; j += 1)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*
Track i = 0
    Check i < 8: 0 < 8: TRUE 
        Execute inner loop
            Track j = 0:
                checking j < 8 : TRUE 
                    execute the body:
                    i = 0 j = 0
            j++
            Track j = 1:
                checking j < 8: TRUE  
                    execute the body:
                    i =0 j = 1
            j++
            Track j = 2:
                checking j < 8: TRUE 
                    execute the body:
                    i = 0 j = 2
            j++ 
            Track j = 3:
                checking j < 8: TRUE 
                    execute the body:
                    i = 0 j = 3
            j++ 
            Track j = 4:
                checking j < 8: TRUE 
                    execute the body:
                    i = 0 j = 4
            j++
            Track j = 5:
                checking j < 8: TRUE 
                    execute the body: 
                    i = 0 j = 5
            j++
            Track j = 6:
                checking j < 8: TRUE 
                    execute the body:
                    i = 0 j = 6 
            j++ 
            Track j = 7:
                checking j < 8 : TRUE 
                    execute the body:
                    i = 0 j = 7
            j++ 
            Track j = 8:
                checking j < 8: FALSE 
                    skip
    i++ : i = 2
        Track i = 2:
            checking i < 8: 2 < 8: TRUE 
                excuting the inner body:
            j = 0
            Track j = 0:
                checking j < 8: TRUE 
                    executing the body:
                    i = 2  j = 0
            j++ 
            Track j = 1
                checking j < 8: TRUE 
                    executing the body: 
                    i = 2 j = 1
            j++ 
            Track j = 2
                checking j < 8: TRUE  
                    executing the body:
                    i = 2 j = 2
            j++
            Track j = 3
                checking j< 8: TRUE  
                    executing the body:
                    i = 2 j = 3
            j++ 
            Track j = 4
                checking j < 8: TRUE 
                    executing the body: 
                    i = 2 j = 4 
            j++
            Track j = 5
                checking j < 8: TRUE 
                    executing the body:
                    i = 2 j = 5
            j++ 
            Track j = 6
                checking j < 8: TRUE 
                    executing the body:
                    i = 2 j = 6
            j++ 
            Track j = 7
                checking j < 8: TRUE 
                    executing the body: 
                    i = 2 j = 7 
            j++ 
            Track j = 8
                checking j < 8: FALSE 
                skip 

    i++ : i = 4
        checking i < 8: 4 < 8 TRUE 
            executing inner loop
            Track j = 0: 
                j < 8: TRUE 
                    executing the body 
                    i = 4 j = 0 
            j++ 
            Track j = 1:
                j < 8: TRUE 
                    executing the body 
                    i = 4 j = 1 
            j++ 
            Track j = 2:
              j < 8 : TRUE 
                executing the body 
                i = 4 j = 2
            j++ 
            Track j = 3:
                j < 8: TRUE 
                    executing the body 
                    i = 4 j=3 
            j++ 
            Track j = 4: 
                j < 8: TRUE 
                    executing the body 
                    i = 4 j = 4
            j++ 
            Track j = 5:
                j < 8: TRUE 
                    executing the body 
                    i = 4 : j = 5
            j++ 
            Track j = 6:
                j < 8 : TRUE 
                executing the body 
                i = 4 j = 6
            j++ 
            Track j = 7:
                j < 8: TRUE 
                executing the body 
                i = 4 j = 7
            j++ 
            Track j = 8:
                j < 8: FALSE 
                skip 

        i++ : i = 6
            checking i < 8: 6 < 8: TRUE 
            executing inner loop
            Track j = 0
                j < 8: TRUE 
                executing the body 
                i = 6 j = 0 
            Track j = 1
                j < 8: TRUE 
                executing the body 
                i = 6 j = 1:
            j++ 
            Track j = 2
                j < 8:: TRUE 
                executing the body 
                i = 6 j = 2 
            j++ 
            Track j = 3
                j < 8: TRUE 
                executing the body 
                i = 6 j = 3 
            j++ 
            Track j = 4 
                j < 8: TRUE 
                executing the body 
                i = 6 j = 4 
            j++
            Track j = 5
                j < 8: TRUE 
                executing the body 
                i = 6 j = 5
            j++ 
            Track j = 6
                j < 8: TRUE 
                executing the body 
                i = 6 j = 6 
            j++ 
            Track j = 7 
                j < 8: TRUE 
                executing the body 
                i = 6: j = 7 
            j++ 
            Track j = 8
                j < 8 : FALSE 
                skip loop
      i++ : i = 8
            Checking i < 8: FALSE  
            skip

*/