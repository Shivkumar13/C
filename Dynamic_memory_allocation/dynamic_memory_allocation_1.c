#include <stdio.h> 
#include <stdlib.h> 

/* 
    S1: Define information structure A with following members. 
        n of the type int. 
        s of the type short. 
        m of the type long.
    
    S2: Allocate structure instance dynamically using malloc. 

    S3: Write 100 on n, 200 on s and 300 on m. 

    S4: Display n, s, and m members of dynamically allocated 
        instance of struct A. 

    S5: Free dynamically allocated instance of struct A. 
*/ 

struct A
{
    int n; 
    short s; 
    long int m; 
}; 

int main(void)
{
    //struct A inA;
    struct A* pA = 0;

    pA = malloc(sizeof(struct A));

    if(pA == 0)
    {
        puts("Memory allocation failed"); 
        exit(-1); 
    }

    puts("Enter the int, short, long int values:");

    scanf("%d", pA);
    scanf("%hd", pA->s);
    scanf("%ld", pA->m);

    printf("pA->n=%d, pA->s=%hd, pA->m=%ld\n", pA->n, pA->s, pA->m);

    free(pA); 
    pA = 0; 

    exit(0); 
}