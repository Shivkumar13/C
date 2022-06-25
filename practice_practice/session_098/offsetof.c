#include <stdio.h>
#include <stdlib.h>

#define OFFSET_OF(T, m)  (unsigned long long int)(&(((T*)0)->m))


struct A
{
    int a;
    char b;
    float c;
    float d;
    int arr[5];
    float frr[5];
};

struct B
{
    int s;
    short s2;
    int arr2[4];
};

int main(void)
{
  
  puts("Calculating the offset of members using the Macro");

  printf("Offset(Struct A, d) = %llu\n", OFFSET_OF(struct A, d)); //OFFSET_OF definition madhe jas input declare kelay tasch 
                                                                  // input dyaych

   printf("Offset(Struct B, arr2[2]) = %llu\n", OFFSET_OF(struct B, arr2[2]));

   return(0);
}