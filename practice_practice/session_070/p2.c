#include <stdio.h>
#include <stdlib.h>

void to_upper(char* c);
void mult_by_10(int* p, unsigned int* q);
void add_by_10(long int* p, unsigned long int* q);
void divide_by_10(long long int* p, unsigned long long int* q);
void sub_by_10(short* a, unsigned short* b);
void do_half(float* a, double* b);

int main(void)
{
    char s = 'c';
    printf("Value of s before calling to_upper is %c\n", s);
    to_upper(&s);
    printf("Value of s after calling to_upper is %c\n", s);

    int i = 10;
    unsigned int u_i= 90;
    printf("Value of i = %d, u_i=%u before calling mult func\n", i, u_i);
    mult_by_10(&i, &u_i);
    printf("Value of i = %d and u_i=%u after calling mult function\n", i, u_i);6.476578 before calling do_half
Value of float f=172.283493, double=17

    long int lng_int_i = -123455;
    unsigned long int u_lng_int = 978372;
    printf("Value of lng_int_i =%ld u_lng_int=%lu before calling add_by_10 func\n", lng_int_i, u_lng_int);
    add_by_10(&lng_int_i, &u_lng_int);
    printf("Value of lng_int_i = %ld u_lng_int=%lu after calling func add_by_10 \n", lng_int_i, u_lng_int);


    long long int  lng_lng_i = -45642342343;
    unsigned long long int u_lng_lng_i = 23415255463;
    printf("Value of lng_lng_i = %lld, u_lng_lng_i=%llu before calling divide func\n", lng_lng_i, u_lng_lng_i);
    divide_by_10(&lng_lng_i, &u_lng_lng_i);
    printf("Value of lng_lng_i=%lld, u_lng_lng_i=%llu after calling divide func\n", lng_lng_i, u_lng_lng_i);

    short short_s = 2343;
    unsigned short u_short = 23423;
    printf("Value of short_s = %hd u_short=%hu before calling sub func\n", short_s, u_short);
    sub_by_10(&short_s, &u_short);
    printf("Value of short_s=%hd and u_short=%hu after calling sub func\n", short_s, u_short);

    float f = 344.567;
    double d = 342356.476578;
    printf("Value of float f =%f, double= %lf before calling do_half\n", f, d);
    do_half(&f, &d);
    printf("Value of float f=%f, double=%lf before calling do_half\n", f , d);

    exit(0);
}

void to_upper(char* c)
{
    char s = *c;
    printf("Value of s is %c\n", s);
    if(s >= 97 && s <= 122)
      {
        *c = *c - 32;
      }
}

void mult_by_10(int* p, unsigned int* q)
{
    *p = *p * 10;
    *q = *q * 10;
}

void add_by_10(long int* p1, unsigned long int* p2)
{
    *p1 = *p1 + 10;
    *p2 = *p2 + 10;
}

void divide_by_10(long long int* p1, unsigned long long int* p2)
{
    *p1 = *p1 / 10;
    *p2 = *p2 / 10;
}

void sub_by_10(short* a, unsigned short* b)
{
    *a = *a - 10;
    *b = *b - 10;
}

void do_half(float* ff, double* gg)
{
    *ff = *ff / 2;
    *gg = *gg / 2;
}



