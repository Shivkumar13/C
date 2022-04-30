#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void input();
float func_perimeter(float a, float b, float c);
float func_semi_perimeter(float a, float q,float r);
float func_area(float a, float b, float g,float anything);
void func_angle(float a, float b, float c);

float a, b, c;
float p;
float ar;
float s_p;
float an_a;
float an_b;
float an_c;

int main(void)
{
    input();
    if(((a > 0) && (b > 0) && (c > 0)) && (((a+b) > c) && ((a+c) > b) && ((b+c)> a)))
    {
    
        p = func_perimeter(a, b, c);
        printf("Perimeter of Triangle is %f\n", p);
    
        s_p = func_semi_perimeter(a , b, c);
        printf("Semi-perimeter of Traingle is %f\n", s_p);

        ar = func_area(a, b, c, s_p);
        printf("Area of Triangle is %f\n", ar);

        func_angle(a, b, c);
        printf("Measure of Angle in radians is Angle A = %f, Angle B = %f, Angle C = %f\n", an_a, an_b, an_c);
        printf("Measure of Angle in degrees is Angle A = %f, Angle B = %f, Angle  C = %f\n", (an_a * (180 / 3.14)), an_b * (180 / 3.14), an_c * (180 / 3.14));
    }
    else{
        puts("Seems like you entered 0 as side length, or invalid length");
        exit(-1);
    }

    exit(0);

}

void input()
{
   
    puts("Enter the length of first side of Triangle:");
    scanf("%f", &a);

    puts("Enter the length of second side of Triangle:");
    scanf("%f", &b);

    puts("Enter the length of third side of Triangle:");
    scanf("%f", &c);

}

float func_perimeter(float a, float b, float c)
{
    float perimeter;
    perimeter = (a + b + c);

    return perimeter;
}

float func_semi_perimeter(float a, float b, float c)
{
    float s = (a + b + c) / 2; 
    return s;
}

float func_area(float a, float  b, float c, float s)
{

    float temp = (s * (s - a) * (s - b) * (s - c)); 

    ar = sqrt(temp);

    return ar;
}

void func_angle(float a, float b, float c)
{
    float an_a_tmp = ((b * b) + (c*c) - (a* a)) / (2 * b * c) ;
    an_a = acos(an_a_tmp);

    float an_b_tmp = ((c*c) + (a*a) - (b*b)) / (2 * c * a);
    an_b = acos(an_b_tmp);

    float an_c_tmp = ((a*a) + (b*b) - (c*c)) / (2 * a * b);
    an_c = acos(an_c_tmp);
}
