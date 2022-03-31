#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float a = 3.4;
    float b= 2.0;
    float c = 2.5;
    float d = 9.1;
    float rs;

    rs = ((a+b+c)/2)*((a+b+c)/2-a)*((a+b+c)/2-b)*((a+b+c)/2-c);
    printf("Value of rs is %f\n", rs);
    exit(0);
}