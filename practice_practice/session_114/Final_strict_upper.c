#include <stdio.h>
#include <stdlib.h>

#define N 5

int a[N][N];

int main(void)
{
    int i, j;

    for(i = 0; i < N; ++i)
    {
        for(j = 0; j < N; ++j)
            {
                a[i][j] = i * 10 + j;
            }
    }

    puts("Printing original array");
    
    for(i = 0; i < N; ++i)
    {
       
        for(j = 0; j < N; ++j)
            {
               printf("%d\t", a[i][j]);
            }
        puts("\n");
        
    }

    puts("Printing strict upper:\n");
    for(i = 0; i < N; ++i)
    {
        puts("\n");
        for(j = i + 1; j < N; ++j)
            {
                printf("%d\t", a[i][j]);
            }
    }

    exit(0);

}