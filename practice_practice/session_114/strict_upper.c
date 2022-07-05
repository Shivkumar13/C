#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void)
{

    int a[N][N];
    int i, j;

    for(i = 0; i < N; ++i)
        for(j = 0; j < N; ++j)
            a[i][j] = i * 10 + j;

     for(i = 0; i < N; ++i)
       {
        for(j = 0; j < N; ++j)
        {
            printf("%d\t", a[i][j]);
           
        }
         printf("\n");
       }

    for(i = 0; i < N; ++i)
    {
        for(j = i + 1; j < N; ++j)
        {
            printf("%d\t", a[i][j]);         
        }
         printf("\n");
    }

      for(i = 1; i <= N; ++i)
        {
        for(j = i - 1; j < i; ++j)
        {
            printf("%d\t", a[i][j]);         
        }
         printf("\n");
        }
    

    exit(EXIT_SUCCESS);
}

