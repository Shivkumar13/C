#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int i = 0;
     
     while(i == 0)
     {
     
      printf("Shivkumar %d\n", i);
    
     if(i == 0)
      i = i + 1;
      printf("%d\n", i);

     printf("Inner break executed!\n");
    
     }     
     
     printf("outer executed!\n");
     
    exit(0);

}
