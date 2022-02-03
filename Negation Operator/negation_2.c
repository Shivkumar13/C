#include <stdio.h>
#include <stdlib.h>

int n;
int m;

int main(void)
{

    puts("In all cases m is assigned to !n");
    n = 100;
    m = !n;
    printf("(n is positive):n=%d, m =%d\n",n,m);

    n = 1;
    m = !n;
    printf("(n is one):n =%d, m=%d\n", n , m);

    //Note: In negation, only negation of 0 comes as 1, otherwise every positive, negative integers
    n = 0;
    m = !n;
    printf("(n is zero):n=%d, m=%d\n", n, m);

    n = -100;
    m = !n;
    printf("(n is negative):n=%d, m=%d\n", n, m);

   
    n = 2200;
    m = !n;
    printf("(n is positive):n=%d, m=%d\n", n, m);

    n = -100.009;
    m = !n;             //Make sure you are giving type specifier correctly
    printf("(n is negative):n=%lu, m=%d\n", n, m);


    n = 2200;
    m = !n;
    printf("(n is positive):n=%d, m=%d\n", n, m);   

    exit(0);

}