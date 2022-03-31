#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int* p = 0;
    int m = 0 ;

    p = malloc(sizeof(int));

    /*if(p==0) 
    {
        puts("Memory allocation failed");
        exit(-1);
    }*/

    printf("p = %llu\n", (unsigned long long int)p);

    /* Write 500 on address in p
        address in p = address of integer
        allocated using malloc
    */
   *p = 500;
   /* read four byte from address in p
    and write on m*/

    m = *p;
    printf("Value of m is %d\n", m);

    /* Mark address in p as free.
    i.e. address in p will in mapped but not in use state OR
        will be unmapped */
    free(p);
    p = 0; 

     exit(0);
}
