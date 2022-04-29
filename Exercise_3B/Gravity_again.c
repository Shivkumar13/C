#include <stdio.h>
#include <stdlib.h>

float force(float G, float m1, float m2, float r);


float G = 6.67e-11;

float m1;
float m2;
float r;
float f;

int main(void)
{
    puts("Enter the mass of first object:");
    scanf("%f", &m1);

    puts("Enter the mass of second object:");
    scanf("%f", &m2);

    puts("Enter the distance between these 2 objects");
    scanf("%f", &r);

    force(G, m1, m2, r);

    printf("Force between 2 objects is %f\n", f);

    exit(0);
}

float force(float G, float m1, float m2, float r)
{
    f = (G * m1 * m2) / (r * r); 
    return f;
}