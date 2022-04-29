#include <stdio.h>
#include <math.h>

int main()
{

//const double G= 6.67e-11;
const double G = 6.674 * pow(10.0, -11.0);

printf("%lf\n", G);

double m1, m2, d;
printf("Enter the first mass\n");
scanf("%lf", &m1);
printf("Enter the second mass\n");
scanf("%lf", &m2);
printf("Enter the distance\n");
scanf("%lf", &d);
double force = (G*m1*m2)/(d*d);
printf("%lf\n",  force );

return (0);
}