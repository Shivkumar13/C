#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, j;

          i = 0;
          for(i = 0; i < 5; ++i)
            {
                for(j = 0; j < i; ++j)
                {
                    printf("j = %d\t", j);
                    
                }
                printf("\n");
            }
        exit(0);
}