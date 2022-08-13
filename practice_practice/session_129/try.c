#include <stdio.h>
#include <stdlib.h>

int main(void)
{

int arr[10] = {10, 20, 30, 40, 50, 60, 70, 80,90, 55};
int N = 10;

int temp = arr[N-1];

for(i = 0; i < N; ++i)
{
    int flag;
    flag = a[i];

    if(flag < temp)
    {
        a[i+1] = temp;
        a[i] = a[i+1];
    }
}
}

}