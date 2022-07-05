#include <stdio.h>
#include <stdlib.h>

#define N 5

int a[N][N];

int main(void)
{
    int i, j;
    int sum = 0;

 for(i = 0; i < N; ++i)
    {
        for(j = 0; j < N; ++j)
            {
                a[i][j] = i * 10 + j;
            }
    }


    for(i = 0; i < N; ++i)
    {
        printf("\n");
        for(j = 0; j < N; ++j)
            {
                printf("%d\t", a[i][j]);
            }
    }


    for(i = 0; i < N; ++i)
    {
        for(j = 1; j > i; ++j)
            {
                printf("");
            }
    }

    exit(0);

}