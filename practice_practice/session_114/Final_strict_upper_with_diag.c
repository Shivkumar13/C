#include <stdio.h>
#include <stdlib.h>

#define N 5

int a[N][N];

int main(void)
{

    int i, j;

    puts("Filling in Array...");
    for(i = 0; i < N; ++i)
        {
            for(j = 0; j < N; ++j)
                {
                    a[i][j] = i * 10 + j;
                }
        }

    puts("Array values filled out!");

    puts("Printing original Array...");
    for(i = 0; i < N; ++i)
        {
            
            for(j = 0; j < N; ++j)
                {
                    printf("%d\t",a[i][j]);
                }
            puts("\n");
        }

    puts("Printing upper and diag:");
    for(i = 0; i < N; ++i)
    {
        puts("\n");
        for(j = i; j < N; ++j)
            {
                printf("%d\t", a[i][j]);
            }
    }
    puts("\n");

    exit(0);
}