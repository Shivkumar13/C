#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 0; i < 16;  ++i)
        for(j = 1; j < 200; j <<= 3)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*
Track i = 0
    checking i < 16: TRUE
        Track j = 1 
            checking j < 200: TRUE
                executing the body
                    i = 0, j = 1
        j <<= 3: j = j << 3 : 1 << 3: 1000
        Track j = 8:
            checking j < 200: TRUE
                executing the body
                    i = 0, j = 8
        j <<= 3: j = j << 3: 8 << 3: 1000000
        Track j = 64
            checking j < 200: TRUE
                executing the body
                    i = 0, j = 64
        j <<= 3: j = j << 3: 64 << 3: 1000000 << 3: 100000000
        Track j = 512
            checking j < 200: FALSE
                skip
i = i + 1: i = 1
    checking i < 16: TRUE
        Track j = 1
            checking j < 200: TRUE
                executing the body:
                    i = 1, j = 1
        j <<=3 : j = j << 3: 1 << 3: 1000
        Track j = 8:
            checking j < 200;: TRUE
                executing the body:
                    i = 1, j = 8
        j <<= 3: j = j << 3: 8 << 3: 1000 << 3: 1000000
        Track j = 64:
            checking j < 200: TRUE
                executing the body:
                    i = 1, j = 64
        j <<= 3: j = j << 3: 64 << 3: 1000000 << 3: 100000000 
        Track j = 512:
            checking j < 200: FALSE
                skip
i = i + 1: i = 2
    checking i < 16: TRUE
        Track j = 1:
            checking j < 200: TRUE
                executing the body:
                    i = 2, j = 1
            j <<= 3: j = j << 3: 1 << 3: 1000
        Track j = 8:
            checking j < 200: TRUE
                i = 2, j = 8
        Track j = 64:
            checking j < 200: TRUE
                i = 2, j = 64
        Track j = 512:
         checking j < 200: FALSE
         skip

i = i + 1: i = 3 
    checking i < 16 : TRUE
        Track j = 1:
            checking j < 200: TRUE
                executing the body  
                    i = 3, j = 1
            checking j < 200: TRUE
            j = 8, TRUE
                i = 3, j = 8
            j <<= 3: j = 64:
            checking j < 200: TRUE
                i = 3, j = 64
            j <<= 3: j = 512: FALSE
            skip
i = i + 1: i += 1: i = 4
    Track i = 4:
        checking i < 16: TRUE
            Track j = 1:
                checking j < 200: TRUE
                    executing the body
                        i = 4, j = 1
            j <<= 3: j = j << 3: j = 8
                checking j < 200: TRUE
                    i = 4, j = 8
            j <<= 3: 8 <<= 3: j = 64:
                    i = 4, j = 64
            j <<= 3: j = 64 << 3: j = 512
                j < 200: FALSE
                skip
i = i + 1: i = 5:
    Track i = 5:    
        checking i < 16: TRUE
            Track j = 1:
                checking j < 200: TRUE
                    i = 5, j = 1
            j <<= 3: j = 8
            Track j = 8:
                checking j < 200: TRUE
                    i = 5, j = 8
            j <<= 3, j = j << 3: j = 64:
                checking j < 200: TRUE
                    i = 5, j = 64
            j <<= 3: j = j << 3: j = 64 << 3: j = 512
                checking j < 200: FALSE
                skip
i = i + 1: i = 6
    cheking i < 16: TRUE
        Track j = 1:
            checking j < 200: TRUE
                i = 6, j = 1
        j <<= 3: j = j << 3: j = 1 << 3: j = 8
        Track j = 8: 
            checking j < 200: TRUE
                i = 6, j = 8
        j <<= 3: j = j << 3: j = 8<< 3: j = 64
            checking j < 200: TRUE
                i = 6, j = 64
        j <<= 3, j = j << 3: j = 64 << 3: j = 512
            checking j < 200: FALSE
                skip
i = i + 1: i = 7:
    checking i < 16: TRUE
        Track j = 1:
            checking j < 200: TRUE
                i = 7, j = 1
        Track j = 8:
            checking j < 200: TRUE
                i = 7, j = 8
        Track j = 64
            checking j < 200: TRUE
                i = 7, j = 64
        Track j = 512
            checking j < 200: FALSE
                skip
    
i = i + 1: i = 8    
    checking j < 16: TRUE
        Track j = 1:
            checking j < 200: TRUE
                i = 8, j = 1
        Track j = 8:
            checking j < 200: TRUE
                i = 8, j = 8
        Track j = 64:
            checking j < 200: TRUE
                i = 8, j = 64
        Track j =512:
            checking j <200 : FALSE
                skip
i = i + 1: i = 9
    checking j < 16: TRUE
        Track j = 1:
            checking j  < 200: TRUE
                i = 9, j = 1
        Track j = 8:
            checking j < 200: TRUE
                i = 9, j = 8
        Track j = 64:
            checking j < 200: TRUE
                i =9, j = 64
        Track j = 512:
            checking j < 200: false
                skip

i = i + 1: i = 10
    checking j < 16: TRUE
        Track j = 1: TRUE
            i = 10, j = 1
        j = 8
        Track j = 8: TRUE
            checking j < 200
                i =10, j = 8
        Track j = 64: TRUE
            checking j < 200
                i = 10, j = 64
        Track j = 512
            checking j < 200: FALSE
                skip
    
i = i +1 : i = 11
    chcking i < 16: TRUE
        Track j = 1
            j < 200: TRUE
                i = 11, j = 1
        Track j <<= 3: j = 8
            cheking j < 200: TRUE
                i = 11, j = 8
        Track j <<= 3: j = 64
            checking j < 200: TRUE
                i = 11, j = 64
        Track j <<= 3: j = 512
            checking j < 200: FALSE
            skip

i = i + 1: i = 12
    checking i < 16: TRUE
        Track j = 1
            j < 200: TRUE
                i = 12, j = 1
        Track j =  8:
            j < 200: TRUE
                i = 12, j = 8
        Track j = 64
            j < 200: TRUE
                i = 12, j = 64
        Trackj = 512:
            j < 200: FALSE
            skip
i = i + 1: i = 13
    checking i < 16: TRUE
        Track j = 1:
            j < 200: TRUE
                i = 13, j = 1
        Track j = 8
            j < 200: TRUE
                i = 13, j = 8
        Track j = 64
            j < 200: TRUE
                i = 13, j = 64
        Track j = 512:
            j < 200: FALSE
                skip
i = i + 1: i = 14:
    checking i < 16: TRUE
        Track j = 1:
            j < 200: TRUE
              i = 14, j =1
        Track j = 8:
            j < 200: TRUE
              i = 14, j = 8
        Track j = 64:
            j < 200: TRUE
              i = 14, j = 64
        Track j = 512:
            j < 200: FALSE
            skip
i = i + 1: i = 15:
    checking i < 16: TRUE
        Track j = 1:
            j < 200: TRUE
                i =15, j = 1
        Tracj j = 8:
            j < 200: TRUE
                i = 15, j = 8
        Track j = 64:
            j < 200: TRUE
                i = 15, j = 64
        Track j = 512:
            j < 200: FALSE
                skip
    
i = i + 1: i = 16: 
     checking i < 16: FALSE
        skip          
*/