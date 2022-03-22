#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int n1=100;
    int n2=57;
    int rs;

    puts("Bitwise NOT");
    rs = ~n1;

    printf("n1=%d, ~n1 = %d\n", n1, rs);

    exit(0);    
}