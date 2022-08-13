#include <stdio.h>
#include <stdlib.h>

void recursive_function(int n);

int main(void)
{
    recursive_function(1);
    return (0);
}

void recursive_function(int n)
{
    if(n == 13)
        return;

    printf("n = %d\n", n);
    recursive_function(n + 1);
    printf("Returning from recursive function with n = %d\n", n);
}