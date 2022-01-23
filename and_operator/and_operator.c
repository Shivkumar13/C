/* 
   proposition = a declarative statement in English which is True or Falst but not both.
   Let p be a proposition.
   Let q be a proposition.

   p AND q is also a proposition.

   Question:
   What is the truth value of p AND q
   Answer:
   Depends on th truth value of p and the truth value of q

   p AND q is a proposition whose truth value is true if both p and q are simultaneously true,
   false otherwise.

   p q  p AND q         | p q  p && q
   F F  F               | 0 0  0
   T F  F               | 0 1  0
   F T  F               | 1 0  0
   T T  T               | 1 1  1
*/

#include <stdio.h>
#include <stdlib.h>

int m;
int n;
int m_and_n;

int main(void)
{
   m = 0;   /* m is false */
   n = 0;   /* n is false */
   m_and_n = m && n; /* && -> LOGICAL AND or SIMPLY AND */
   printf("m=%d, n=%d, m_and_n=%d\n", m, n, m_and_n);

   m = 0;   /* m is false */
   n = 1;   /*n is true */
   m_and_n = m && n;
   printf("m=%d, n=%d, m_and_n=%d\n", m, n, m_and_n);

   m = 1;   /* m is true */
   n = 0;   /* n is false */
   m_and_n = m && n;
   printf("m=%d, n=%d, m_and_n=%d\n", m, n, m_and_n);

   m = 1;     /* m is true */
   n = 1 ;    /* n is true */
   m_and_n = m && n;
   printf("m=%d, n=%d, m_and_n=%d\n", m, n, m_and_n);

  exit(0);


}
