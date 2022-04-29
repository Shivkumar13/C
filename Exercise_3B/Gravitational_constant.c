/*
Author: Shivkumar Ople

Goal: To calculate Gravitational Force between to objects.

Where G = 6.67 * 10^-11 is Gravitational Constant
m1 is the mass of Object 1
m2 is the mass of Object 2
r is the distance between them

*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float m1;
float m2;
float r;
double D;

int main(void)
{
    long double G = 0.00000006673;
    
    D = pow(10, 11);

    printf("Value of D is %lf\n", D);
    printf("Value of G is %Lf\n", G);
    exit(0);
    
}