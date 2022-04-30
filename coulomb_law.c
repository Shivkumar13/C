#include <stdio.h>
#include <stdlib.h>

const float k = 8.98e9;
float q1;
float q2;
float r;
float f;

int main(void)
{

    puts("Enter the charge on the particle p1:");
    scanf("%f", &q1);    

    puts("Enter the charge on particle p2:");
    scanf("%f", &q2);

    puts("Enter the distance between two:");
    scanf("%f", &r);

    
    f = (k * q1 * q2) / (r * r);

    if((q1 < 0 && q2 > 0) || (q1 > 0 && q2 < 0))
    {
        puts("q1 and q2 will attract each other");
    }
    else{
        puts("q1 and q2 will repel each other");
    }

    printf("The magnitude of the force is %f \n", f);

    exit(0);
}
