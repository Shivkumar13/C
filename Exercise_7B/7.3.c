#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i =0; i < 8; i += 3)
        for(j = 0; j < 8; j += 2)
            printf("i = %d, j = %d\n", i, j);
    exit(0);
}

/*

Track  i = 0: 
    Check i < 8 : TRUE
        executing the inner body:
            Track J = 0
                checking j < 8: TRUE
                    executing the inner loop body
                        i = 0, j = 0
            j += 2 : j = j + 2
            Track J = 2
                checking j < 8: TRUE
                    executing the inner loop body
                        i = 0, j = 2
            j = 2 + 2
            Track j = 4
                checking j < 8: TRUE    
                    executing the inner loop body
                        i = 0, j = 4
            j = 4 + 2
            Track j = 6
                checking j < 8: TRUE
                    executing the inner loop body
                        i = 0, j = 6
            j = j + 2: j = 6 + 2
            Track j = 8
                checking j <8: FALSE
                    skip
    i += 3: i = i + 3
        Track i = 3:
            checking i < 8: TRUE
                Track j = 0
                    checking 0 < 8: TRUE
                        executing the body
                            i = 3, j =0
                j = j + 2: j = 2:
                    Track j = 2:
                        checking j < 8: TRUE
                            executing the body
                                i = 3, j = 2
                j = j + 2: j = 4:
                    Track j = 4:
                        checking j < 8: TRUE
                            executing the body
                                i = 3, j = 4
                j = j + 2: j = 6:
                    Track j = 6:
                        checking j < 8: TRUE
                            executing the body
                                i = 3, j = 6
                j = j + 2: j = 8:
                    Track j = 8:
                        checking j < 8: FALSE
                            skip
    i = i + 3: i += 3
                i = 6:
                Track i = 6
                    checking  i < 8: TRUE
                        Track j = 0:
                            checking j < 8: TRUE
                                executing the body:
                                i = 6, j = 0
                    j = j + 2
                        Track  j = 2:
                            checking j < 8: TRUE
                                executing the body
                                i = 6, j = 2
                    j = j + 2
                        Track j = 4:
                            checking j < 8: TRUE
                                executing the body
                                i = 6, j = 4
                    j = j + 2
                        Track j = 6:
                            checking j < 8: TRUE
                                executing the body  
                                i = 6, j = 6
                    j = j + 2
                        Track j = 8
                            checking  j < 8: FALSE
                                skip
    i += 3: i = i + 3: i = 6 + 3
            Track i = 9
                Checking i < 8 
                False
                skip

*/

