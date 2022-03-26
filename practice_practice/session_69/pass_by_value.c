#include <stdio.h>
#include <stdlib.h>

int addition(int a, int b);

int main(void) 
{
    int i;
    int x = 20;
    int y = 30;
    int sum = 0;

    printf("value of x before calling addition is %d\n", x);
    printf("value of y before calling addition is %d\n", y);

    printf("Address of x is %llu\n", (unsigned long long int)&x);
    printf("Address of y is %llu\n", (unsigned long long int)&y);

    sum = addition(x, y);

    printf("Addition is %d\n", sum);
    
    exit(0);
}

int addition(int a, int b)
{
    int sum;
    int x;
    int y;
    sum = a + b;

    x = 560;    // This x and y are totally different than the one declared in main()
                //Function's local storage is visible to that same function only.
    y = 560;
    return sum;
}