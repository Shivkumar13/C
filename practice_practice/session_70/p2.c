#include <stdio.h>
#include <stdlib.h>

void to_upper(char* p_char);
void mult_by_10(unsigned char* p_uchar);
void add_by_10(short* p_short_num, unsigned short* p_ushort_num);
void sub_by_10(int* p_num, unsigned int* p_uint_num);
void div_by_10(long int* p_lng_num, unsigned long int* p_ulng_num);
void mult_by_5(long long int* p_lng_lng_num, unsigned long long int* p_ulng_lng_num);
void do_half(float* pf_num, double* pd_num);

int main(void)
{

   char c1;
   unsigned char c2;

   short s1;
   unsigned short us1;

   int n1;
   unsigned int un1;

    long int  lng_n1;
    unsigned long int u_lng_n1;

    long long int lng_lng_n1;
    unsigned long long int u_lng_lng_n1;

    float f_num;
    double d_num;

    c1 = 'm';
    printf("Before call:c1=%c\n", c1);
    to_upper(&c1);
    printf("After call:c2 = %hhu\n", c1);


}
