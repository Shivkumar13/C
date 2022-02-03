#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int n1 = 13;
    int n2 = 12;
    int rs;

    puts("Bitwise NOT:");
    rs = ~n1;
    printf("n1 = %d, ~n1= %d\n", n1, rs);
    rs = ~n2;
    printf("n2 = %d, ~n2= %d\n", n2, rs);

    puts("Bitwise OR");
    rs = n1 | n2;
    printf("n1 = %d, n2= %d, rs=%d\n", n1, n2, rs);

    puts("Bitwise AND");
    rs = n1 & n2;
    printf("n1=%d, n2=%d, rs=%d\n", n1, n2, rs);

    puts("Bitwise XOR");
    rs = n1 ^ n2;
    printf("n1 = %d, n2=%d, rs=%d\n", n1,n2, rs);
    
    exit(0);
    
}