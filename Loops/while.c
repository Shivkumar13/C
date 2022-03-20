#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    i = 1;
    while(i <=5)
    {
        puts("Hello");
        i = i +1;
    }

    exit(0);
}

/* 
    Track -> i = 1  
              CHECK: i <= 5 : 1 <=5 : TRUE
               EXECUTE body:
                    EXECUTE (puts("Hello"))
                    EXECUTE (i = i+1)

   Track -> i = 2
            CHECK: i <= 5: 2 <=5 : TRUE
            EXECUTE BODY:
                 EXECUTE (puts("Hello"))
                 EXECUTE (i = i+1))

    Track -> i = 3
            CHECK: i <= 5: 3 <=5 : TRUE
            EXECUTE BODY:
                 EXECUTE (puts(Hello))
                 EXECUTE (i = i+1)
    Track -> i = 4
            CHECK: i <=5 : 4<=5 : TRUE
            EXECUTE BODY:
                  EXECUTE (puts(Hello))
                  EXECUTE (i= i+1)
    Track -> i = 5
            CHECK: i <= 5 : 5 <=5 : TRUE
            EXEXUTE BODY:
                 EXECUTE (puts(Hello))
                 EXCUTE (i = i+1)

    Track -> i = 6
            CHECK: i <= 5: 6 <=5 : FALSE
            
            exit(0);

*/
