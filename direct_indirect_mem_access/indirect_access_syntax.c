#include <stdio.h>
#include <stdlib.h>

int n = 0;
int *some;   /* some is a pointer to int */

char z = 'A';
char* pc;  /* pc is a pointer to char */

unsigned short uku = 2578; 
unsigned short* p_short;   /* p_short is a pointer to unsigned short */

int main(void)
{

   printf("&n =%llu\n", (unsigned long long int)&n);
   some = &n;

   printf("BEFORE executing (*p= 150) | Address IN some = %llu\n", (unsigned long long)some);
   printf("BEFORE executing (*p = 150) | n =%d\n", n);
   *some = 150;
   printf("AFTER executing (*p = 150) | n = %d\n", n);
   printf("AFTER executing (*p = 150) | Address IN some = %llu\n", (unsigned long long)some);
   exit(0);
}

/* 

*p = p chya atlya address war

lhs = *p 

p chya atlya address vr read operation kra
PERFORM READ Operation on Address in p

*p = rhs

p chya atlya address war write operation kra
PERFORM WRITE Operation on Address in p

THIS Does not change the Content Inside p.

p will continue to hold THE address  assigned to it

*/












