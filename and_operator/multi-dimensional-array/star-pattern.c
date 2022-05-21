#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n;
    printf("Enter the number of rows:\n");
    scanf("%d", &n);

    for(int i = 0; i <= n; ++i)
    {
        for(int j = 0; j <= i; ++j)
        {
            printf("*");
        }
        printf("\n");
    }

exit(0);
}