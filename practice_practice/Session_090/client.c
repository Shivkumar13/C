#include <stdio.h>
#include "test.h"

int main(void)
{
   printf("inside the main\n");

   addition();
   puts("return from add");

   multiplication();
   puts("return from mul");

   return(0);
}
