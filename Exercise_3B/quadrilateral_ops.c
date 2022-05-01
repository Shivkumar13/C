#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float a, b, c, d;
float s_peri;
float ar;
float p;

void accept_data();
float func_peri(float a, float b, float c, float d);
float func_area(float a, float b, float c, float d, float s_peri);

int main(void)
{
   int m, n;
  
   accept_data();
  
   m = ((a > 0) && (b > 0) && (c > 0) && (d > 0));
   n = ((a+b+c) > d) && ((b+c+d) > a) && ((c+d+a) > b) && ((a+b+d) > c);

   if(m && n)
    {
    
    p = func_peri(a, b, c, d);
    ar = func_area(a, b, c, d, s_peri);
    printf("Perimeter =%f\n", p);
    printf("Area of quadrilateral=%f\n", ar);

    }
    else{
        puts("Invalid legths of sides provided");
        exit(-1);
    }
  
   exit(0);

}

void accept_data()
{
    puts("Enter the length of the sides");
    scanf("%f %f %f %f", &a, &b, &c, &d);
}

float func_peri(float a, float b, float c, float d)
{
    float p = a + b+ c + d;
    s_peri = p / 2;
    return p;
}

float func_area(float a, float b, float c, float d, float s_peri)
{
    float area;
    float temp_area = (s_peri - a) * (s_peri - b) * (s_peri -c) * (s_peri - d);

    area = sqrt(temp_area);
    return area;
}
