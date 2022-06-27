#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i =0; i < 8; i += 4)
        for(j = 0; j < 8; j += 5)   
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*

    Track i = 0
        checking i < 8: TRUE
            executing inner loop:
                Track j = 0
                    checking j < 8: TRUE
                        executing the body
                            i = 0, j = 0
            j += 5 : j = j + 5
                Track j = 5
                    checking j < 8: TRUE
                        executing the body
                            i =0, j = 5
            j += 5: j = j + 5
                Track j = 10
                    checking j < 8: FALSE
                        skip
    Track i += 4: i = 4:
        checking i < 8: TRUE
            executing the inner loop:
                Track j = 0:
                    checking j < 8: TRUE
                        executing the body
                            i = 4, j = 0
                j = j + 5
                Track j = 5:
                    checking j < 8: TRUE
                        executing the body
                            i = 4, j = 5
                j = j + 5:
                Track  j = 10
                    checking j < 8: FALSE
                        skip
    Track i += 4: i = 8
        checking i < 8: FALSE
            skip
        
    Execution Done!

*/