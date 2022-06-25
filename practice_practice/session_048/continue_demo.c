#include <stdio.h>
#include <stdlib.h>

/*
    @goal: print all elements of array except the ones which are 
    divisible by 7
*/

int a[10] = {7, 14, 7, 21, 28, 35, 49, 56, 63, 30};
int N = 10;

int main(void)
{
    int i;
    i = 0;
    while(i <= N-1)
    {
        if((a[i]) % 7 == 0)
        {
            i = i + 1;
            continue;
        }

        if((a[i]) % 7 != 0)
        {
            printf("a[%d]=%d\n", i, a[i]);
             i = i + 1;
        }
    }
    exit(0);
}