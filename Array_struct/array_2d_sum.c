#include <stdio.h>
#include <stdlib.h>

int arr[3][4]; 
int i, j;


int main(void)
{

    int sum = 0;

        for(i = 0; i < 3; ++i)
        {
            for(j = 0; j < 4; ++j)
                {
                    arr[i][j] = 10 * i;
                }
        }

    for(i = 0; i < 3; ++i)
    {
        for(j =0; j < 4; ++j)
        {
            printf("Array elements: %d\n", arr[i][j]);
        }
    }
    

    for(i = 0; i < 3; ++i)
    {
        for(j = 0; j < 4; ++j)
        {
            sum = arr[i][j] + sum;
        }
    }

    printf("Sum = %d\n", sum);

}

