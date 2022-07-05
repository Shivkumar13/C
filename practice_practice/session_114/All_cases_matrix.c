#include <stdio.h>
#include <stdlib.h>

#define N 5

int arr[N][N];

int main(void)
{
    int i, j;

    puts("Creating the matrix:");
    for(i = 0; i < N; ++i)
        {
            for(j = 0; j < N; ++j)
                {
                    arr[i][j] = i * 10 + j;
                }
        }
    
    puts("Printing the original matrix:");
    for(i = 0; i < N; ++i)
    {
        puts("\n");
        for(j = 0; j < N; ++j)
            {
                printf("%d\t", arr[i][j]);
            }
        puts("\n");
    }

    puts("Printing the strict upper part of matrix:");
    for(i = 0; i < N; ++i)
    {
        puts("\n");
        for(j = i + 1; j < N; ++j)
            {
                printf("%d\t", arr[i][j]);
            }
        puts("\n");
    } 

    puts("Printing upper part with diag:");
    for(i = 0; i < N; ++i)
    {
        puts("\n");
        for(j = i; j < N; ++j)
            {
                printf("%d\t", arr[i][j]);
            }
        puts("\n");
    }

    puts("Printing the strict lower part:");
    for(i = 0; i < N; ++i)
    {
        puts("\n");
        for(j = 0; j < i; ++j)
            {
                printf("%d\t", arr[i][j]);
            }
        puts("\n");
    }

    puts("Printing the lower part with diagonal:");
    for(i = 0; i < N; ++i)
        {
            puts("\n");
            for(j = 0; j <= i; ++j)
                {
                    printf("%d\t", arr[i][j]);
                }
            puts("\n");
            
        }

    
    return (0);

}