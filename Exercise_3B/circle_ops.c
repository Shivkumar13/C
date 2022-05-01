#include <stdio.h>
#include <stdlib.h>

float ar_circle, circumference;
float r;

float calc_circum(float a);
float calc_area(float r);

int main(void)
{
    puts("Enter the radius for calculating circumference and area of circle");
    scanf("%f", &r);

    if(r > 0){
    circumference = calc_circum(r);
    ar_circle = calc_area(r);

    printf("Circumference is %f\n", circumference);
    printf("Area is %f\n", ar_circle);
    }
    else{
        puts("Invalid radius!");
        exit(-1);
    }

       exit(0);
}

float calc_circum(float r)
{
    float c;
    c = 2 * 3.14 * r;
    return c;
}

float calc_area(float r)
{
    float a;
    a = 3.14 * r * r;
    return a;
}
