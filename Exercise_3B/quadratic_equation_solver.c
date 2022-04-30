#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float func_r1(int a, int b, int c);
float func_r2(int a, int b, int c);

int a, b, c; 
float r1, r2;

int main(void)
{
    puts("Enter the value of a (value should not be eqaul to 0):");
    scanf("%d", &a);

    puts("Enter the value of b:");
    scanf("%d", &b);

    puts("Enter the value of c:");
    scanf("%d", &c);

    if ((a != 0) && ((b*b - 4 * a * c) >= 0) )
    {
       r1 =  func_r1(a, b, c);
       r2 =  func_r2(a, b, c);
    }
    else{
        puts("the equation ax^2 + bx + c = 0 does not have roots in real");
        exit(0);
    }

    printf("roots of the equation are r1 = %f, r2 = %f\n", r1, r2);
    exit(0);
}

float func_r1(int p, int q, int r)
{
    int temp;
    temp = sqrt((q*q) - 4 * p * r);

    r1 = ((-q) + temp) / (2 * p);

    return r1;
}

float func_r2(int p, int q, int r)
{
    int temp;       
    temp = sqrt((q*q) - 4 * p * r);

    r2 = ((-q) - temp) / (2* p);

    return r2;
}
