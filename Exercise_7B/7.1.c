#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;
    for(i = 0; i < 8; ++i)
        for(j = 0; j < 8; ++j)
            printf("i=%d j=%d\n", i, j);
    exit(0);
}


/*
Track i = 0
    Checking i < 8: 0 < 8: TRUE
        Track j=0
        Checking j < 8: 0 < 8: TRUE
            execute the body printf 
            i=0 j=0
        J++:  j = 1
        Track J = 1
        Checking J < 8: 1 < 8: TRUE
            execute the body printf
            i = 0 j = 1
        j++: j = 2
        Track j = 2
        checking j < 8: 2 < 8: TRUE
            execute the printf
            i = 0 j = 2
        j++ : 3
        Track j = 3
        checking j < 8: 3 < 8: TRUE
            execute the printf
            i = 0 j=3
        j++ : 4
        Track j=4
        Checking j< 8: 4< 8: TRUE
            execute the printf
            i =0 j=4
        j++ : 5
        Track j=5
        checking j < 8: 5< 8: TRUE
            execte the printf
            i=0 j=5
        j++: j=6
        checking j < 8: 6<8: TRUE
            execute the printf
            i=0 j=6
        j++: j=7
        checking j<8: 7< 8: TRUE
            execute the printf
            i=0 j=7
        j++: j=8
        checking j < 8: 8< 8: FALSE
            
    i++ : i=1
    Track i = 1
        checking i < 8: 1 < 8: TRUE
            Track j=0
                checking j < 8: TRUE
                 execute printf
                i = 1 j = 0
            j++ : j =1
            Track j=1
                checking j < 8: TRUE
                execute printf
                i = 1, j = 1
            j++: j = 2
            Track j = 2
                checking j < 8: TRUE
                execute printf
                i=1 j=2
            j++: j = 3
            Track j = 3:
                checking j < 8: TRUE
                execute printf
                i = 1, j=3
            j++ : j = 4
            Track J = 4
                checking j< 8: TRUE
                execute printf
                i = 1, j = 4
            j++ : j = 5
            Track j = 5
                checking j < 8: TRUE
                execute printf
                i = 1, j = 5
            j++: j = 6
            Track j = 6:
                checking j < 8: TRUE
                exexute printf
                i = 1, j = 6
            j++: j = 7:
                checking j < 8: TRUE
                execute printf
                i = 1, j = 7
            j++ : j = 8:
                checking j < 8: FALSE
                
    i++ : i = 2
        Track i = 2:
        Checking i < 8: 2 < 8: TRUE
            execute inner loop
                int j = 0: 
                Track j = 0,
                    checking j < 8: 0 < 8: TRUE
                        execute body
                        i = 2, j = 0
                j++: j = 1:
                Track j = 1:
                    checking j < 8: 1 < 8: TRUE
                        execute body
                        i = 2, j = 1
                j++ : j = 2
                Track j = 2:    
                    checking j < 8: 2 < 8: TRUE
                        execute body
                        i = 2 j = 2
                j++: j=3
                Track j = 3
                    checking j < 8: 3 < 8: TRUE
                        execute body
                        i = 2 j = 3
                j++: j = 4
                Track j = 4
                    checking j < 8: 4 < 8: TRUE
                        execute body
                        i=2 j = 4
                j++ : j = 5
                Track j = 5
                    checking j < 8: 5 < 8: TRUE
                        execute body
                        i = 2 j = 5
                j++ :  j = 6
                Track j = 6
                   checking j < 8:  6 < 8: TRUE
                        execute body
                        i = 2 j = 6
                j++ : j = 7
                Track j = 7
                    checking j < 7: 7 < 8: TRUE
                        executing body
                        i = 2  j = 7
                j++ : j = 8
                    checking j < 8: 8 < 8: FALSE
                        skip body
        
        i++ : i = 3
            Track j = 0
            Checking j = 0 : j < 8: 0 < 8
                executing the code
                i = 3, j = 0
            j++ : j = 1 : j < 8 : 1 < 8: TRUE
    
                i = 3: j = 1

            j++ : j = 2
            Track j = 2: j < 8: 2 < 8: TRUE
                executing the code
                i = 3: j = 2
            
            j++ : j = 3
            Track j = 3: 3 < 8: TRUE
                executing the code
                i = 3: j = 3
            j++ : j = 4
            Track j = 4: 4 < 8: TRUE
                executing the code
                i = 3: j = 4
            j++ : j = 5
            Track j = 5 : 5 < 8: TRUE
                executing the code
                i = 3: j = 5
            j++ : j = 6
            Track j = 6: 6 < 8: TRUE
                executing the code
                i = 3: j = 6
            j++ : j = 7
                executing the code
                i = 3: j = 7
            j++ : j = 8
                j = 8: j < 8 : FALSE

    i++ : i = 4
        Track i = 4
        i = 4: i < 8 : TRUE
            execute inner loop
            Track j = 0:
            j < 8: 0 < 8: TRUE
                executing body
                i = 4  j = 0
            j++ : j = 1
            Track j = 1
            j < 8: 1 < 8: TRUE
                executing body
                i = 4 j = 1
            j++ : Track j = 2
            j < 8: 2 < 8 : TRUE
                executing body
                i = 4 , j = 2
            j++ : Track j = 3:
            j < 8: 3 < 8 : TRUE
                executing the body
                i = 4: j = 3
            j++ : Track j = 4
            j < 8: 4 < 8 : TRUE
                executing the body
                i = 4: j = 4
            j++ : Track j = 5
            j < 8: 5 < 8: TRUE
                executing the body
                i = 4: j = 5
            j++ : Track j = 6
                executing the body
                i = 4 : j = 6
            j++ : Track j = 7
                j < 8: 7 < 8 : TRUE
                executing the body
                i = 4: j = 7
            j++ : Track j = 8:
                j < 8: 8 < 8 : FALSE
                skip iteration
            
    i++     i = 5
            Track i = 5: 5 < 8: TRUE
                execute inner loop
                Track j = 0
                    Track j = 0, j < 8: TRUE
                    executing the body
                    i = 5: j = 0
                j++: j = 1:
                Track j = 1: j < 8: 1 < 8: TRUE
                executing the body
                    i = 5: j = 1
                j++ : j = 2:
                Track j = 2: j < 8: 2 < 8: TRUE
                executing the body
                    i = 5: j = 2
                j++ : j = 3
                Track j = 3: j < 8: 3 < 8 : TRUE
                executing the body
                    i = 5: j = 3
                j++ : j = 4
                Track j = 4: j < 8 : 4 < 8: TRUE
                executing the body
                    i = 5  j = 4
                j++ : j = 5
                Track j = 5: j < 8: 5 < 8: TRUE
                executing the body
                    i = 5 j = 5
                j++ : j = 6
                Track j = 6: j < 8: 6 < 8: TRUE
                executing the body
                    i = 5 j = 6
                Track j = 7: j < 8: 7 < 8: TRUE
                executing the body
                    i = 5: j = 7
                j++ : j = 8
                Track j =8: j < 8 : 8 < 8 : FALSE
                Skip

        i++ : i=6
            Track i = 6: i < 8
                    J = 0: j < 8: 0 < 8: TRUE
                    executing the body
                        i = 6 j = 0
                    j++ : j = 1
                    Track j = 1, j < 8: 1 < 8 : TRUE
                    executing the body
                        i = 6 j =1
                    j++ : j =2
                    Track j = 2: j < 8: 2 < 8: TRUE
                    executing the body
                        i = 6: j = 2
                    j++ : j = 3:
                    Track j = 3: j < 8: 3 < 8 : TRUE
                    executing the body
                        i = 6: j = 3
                    j++ : j = 4
                    Track j = 4: 4 < 8: TRUE
                    execute the body
                        i = 6: j = 4
                    j++ : j = 5
                    Track j = 5: 5 < 8: TRUE
                    executing the body
                        i = 6: j = 5
                    j++ : j = 6
                    Track j = 6: 6 < 8: TRUE
                    executing the body
                        i = 6: j = 6
                    j++ : j = 7
                    Track j = 7: 7 < 8: TRUE
                    executing the body
                        i = 6: j = 7
                    j++ : j = 8
                    Track j = 8: j < 8: 8 < 8: FALSe
                    skip
        i++ : i = 7
                Track i = 7 : i < 8: TRUE
                    Executing the inner loop
                        j = 0 
                    Track j = 0: j < 8: 0 < 8 : TRUE
                        executing the body
                        i = 7: j = 0
                    j++ : j = 1
                    Track j = 1: j < 8: 1 < 8: TRUE
                        executing the body
                        i = 7: j = 1
                    j++ : j = 2
                    Track j = 2: j < 8:  2 < 8: TRUE
                        executing the body
                        i = 7: j = 2:
                    j++ : j = 3
                    Track j = 3: j < 8: 3 < 8: TRUE
                        executing the body
                        i = 7: j = 3
                    j++ : j = 4
                    Track j = 4: j < 8: 4 < 8: TRUE
                        executing the body
                        i = 7: j = 4
                    j++ : j = 5:
                    Track j = 5: j < 8: 5 < 8: TRUE
                        executing the  body
                        i = 7: j = 5
                    j++ : j = 6
                    Track j = 6: j < 8: 6 < 8: TRUE
                        executing the body
                        i = 7 j =6
                    j++ : j=7
                    Track j = 7: j < 8: 7 < 8: TRUE
                        executing the body
                        i = 7: j = 7
                    j++ : j = 8:
                    Track j = 8: j < 8: 8 < 8 : FALSE
                    skip the body
        i++ : i = 8
                Track i =8
                i < 8 : 8 < 8: FALSE
                skip the body...

*/

            










