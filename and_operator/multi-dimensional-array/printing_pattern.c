#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;

    for(i = 0; i < 1; ++i)
    {
        puts("*");
       
        for(int j = 0; j < 2; ++j)
        {
            printf("*");

            if(j == 1)
            {
                puts("");
                for(int k =0; k < 3; ++k)
                      {
                        printf("*");

                        if(k == 2)
                        {
                            puts("");
                            for(int l =0 ; l < 4; ++l)
                                printf("*");
                        }
                      }
            }

        }
        puts("");
    
    }
   
   exit(0);

}