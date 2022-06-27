#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i=0; i < 16; i += 2)
        for(j=1; j < 128; j *=2)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*

Track i = 0
    checking i < 16: 0 < 16: TRUE
        executing the inner loop:
            Track j = 1:
                checking j < 128: 1 < 128: TRUE
                    executing the body
                        i = 0, j = 1
            j *= 2: j = j * 2: j = 2

            Track j = 2:
                checking i < 128: 2 < 128: TRUE
                    executing the body
                        i = 0, j = 2
            j *= 2: j = 2 * 2: j = 4
            Track j = 4:
                checking i < 128: 4 < 128: TRUE
                    executing the body
                        i = 0, j = 4
            j *= 2: j = j * 2: j = 8
            Track j = 8:
                checking i < 128: 8 < 128: TRUE
                    executing the body
                        i = 0, j = 8
            j *= 2: j = j * 2: j = 16
            Track j = 16:
                checking j < 16: 16 < 128 : TRUE
                        i = 0, j = 16
            j = j * 2: j = 32
            Track j = 32:
                  checking j < 128: TRUE
                    i = 0, j = 32
            j = j * 2: j = 64
            Track j = 64:
                checking j < 128: TRUE
                    i = 0, j = 64
            j = j * 2: j = 128
            Track j = 128:
                checking j < 128: FALSE
                    skip 
                
    i += 2: i = i + 2: i = 2
    Track i = 2:
        checking i < 16: 2 < 16: TRUE
            executing the inner loop:
                Track j = 1:
                    checking j < 128: TRUE
                        executing the inner body
                            i = 2, j = 1
                j *= 2: j = j * 2: j = 2
                Track j = 2:
                    checking j < 128: TRUE
                        executing the inner body
                            i = 2, j = 2 
                j*= 2: j = j * 2: j = 2 * 2: j = 4
                Track j = 4:
                    checking j < 128: TRUE
                        executing the inner body
                            i = 2, j = 4
                j *= 2: j = j * 2: j = 8
                Track j = 8
                    checking j < 128: TRUE
                            i = 2, j = 8
                j = j * 2: j = 16
                Track j = 16: 
                    checking j < 128: TRUE
                        i = 2, j = 16
                j = j * 2: j = 32
                Track j = 32: 
                    checking j < 128: TRUE
                        i = 2, j = 32
                j = j * 2: j = 64
                Track j=64:
                    checking j < 128: TRUE
                        i = 2, j = 64
                j = j * 2: j = 128
                    checking j < 128: FALSE
                    skip
    
    i += 2: i = i + 2: i = 4
    Track i = 4
        checking i < 16: TRUE
            Track j = 1:
                checking j < 128: TRUE
                    i = 4, j = 1
            j = j * 2: j = 2
            Track j = 2:
                checking j < 128: TRUE
                    i = 4, j = 2
            j = j * 2: j = 4
            Track j = 4:
                checking j < 128: TRUE
                    i = 4, j = 4
            j = j * 2: j = 8:
            Track j = 8:
                checking j < 128: TRUE
                    i = 4, j = 8
            j = j * 2: j = 16
            Track j = 16:
                checking j < 128: TRUE
                    i = 4, j = 16
            j = j * 2: j = 32
            Track j = 32
                checking j < 128: TRUE
                    i = 4, j = 32
            j = j * 2: j = 64
            Track j = 64
                checking j < 128: TRUE
                    i = 4, j = 64
            j = j * 2: j = 128
            Track j = 128:
                checking j < 128: FALSE
                    skip
    
    i = i + 2: i = 6:
        checking i < 16: TRUE
                Track j = 1:
                    checking j < 128: TRUE
                        i = 6, j = 1
                j = j * 2: j = 2
                Track j = 2:
                    checking j < 128: TRUE
                        i = 6, j = 2
                j = j * 2: j = 4
                Track j = 4:
                    checking j < 128: TRUE
                        i = 6, j = 4
                j = j * 2: j = 8
                Track j = 8:
                    checking j < 128: TRUE
                        i = 6, j = 8
                j = j * 2: j = 16
                Track j = 16:
                    checking j < 128: TRUE
                        i = 6, j = 16
                j = j * 2: j = 32:
                Track j = 32:
                    checking j < 128: TRUE
                        i = 6, i = 32
                j = j * 2: j = 64:
                Track j = 64
                    checking j < 128: TRUE
                        i = 6, j = 64
                j = j * 2: j = 128
                Track j = 128:
                    checking j < 128: FALSE
                        skip
                    
    i = i + 2: i = 8
        checking 8 < 16: TRUE
            Track j = 1:
                checking j < 128: TRUE
                    i = 8, j = 1
            Track j = 2:
                checking j < 128: TRUE
                    i = 8, j = 2
            Track j = 4:
                checking j < 128: TRUE
                    i = 8: j = 4
            Track j = 8:
                checking 8 < 128: TRUE
                    i = 8, j = 8
            Track i = 16:
                checking 16 < 128: TRUE
                    i = 8, j = 16
            Track i = 32:
                checking 32 < 128: TRUE
                    i = 8, j = 32
            Track i = 64:
                checking 64 < 128: TRUE
                    i = 8, j = 64
            Track i = 128:
                checking 128 < 128: FALSE
                    skip

    i = i + 2: i = 10
            checking i < 16: TRUE
                    Track j = 1 
                        checking j < 128: TRUE
                            i = 10, j = 1
                    j = j * 2: j = 2
                        checking j < 128: TRUE
                            i = 10, j = 2
                    j = j * 2: j = 4
                        checking j < 128: TRUE
                            i = 10, j = 4
                    j = j * 2: j = 8
                        checking i < 128: TRUE
                            i = 10, j = 8
                    j = j * 2: j = 16
                        checking j < 128: TRUE
                            i = 10, j = 16
                    j = j * 2: j = 32
                        checking j < 128: TRUE
                            i = 10, j = 32
                    j = j * 2: j = 64
                        checking j < 128: TRUE
                            i = 10, j = 64
                    j = 128
                        checking j < 128: FALSE
                            skip
    i += 2: i = i + 2: i = 12
            checking i < 16: TRUE
                Track j = 1:
                    checking j < 128: TRUE
                        i = 12, j = 1
                    checking j < 128: TRUE
                        i = 12, j = 2
                    checking j < 128: TRUE
                        i = 12, j = 4
                    checking j < 128: TRUE
                        i = 12, j = 8
                    checking j < 128: TRUE
                        i = 12, j = 16
                    checking i < 128: TRUE
                        i = 12, j = 32
                    checking i < 128: TRUE
                         i = 12, j = 64
                    checking i < 128: FALSE
                        skip
    
    i += 2: i = 14: 
        checking i < 128: TRUE
            Track j = 1:
                checking j < 128: TRUE
                    i = 14, j = 1
            Track j = 2:
                checking j < 128: TRUE
                    i = 14, j = 2
            Track j = 4:
                checking j < 128: TRUE
                    i = 14, j = 4
            Track j = 8:
                checking j < 128: TRUE
                    i = 14, j = 8
            Track j = 16:
                checking j < 128: TRUE
                    i = 14, j = 16
            Track j = 32:
                checking j < 128: TRUE
                    i = 14, j = 32
            Track j = 64:
                checking j < 128: TRUE
                    i = 14, j = 64
            Track j = 128:  
                checking j < 128: FALSE
                    skip
        
    i += 2: i = i + 2: i = 16
        checking i < 16: FALSE
            skip
*/
