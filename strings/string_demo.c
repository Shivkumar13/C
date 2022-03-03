#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char A[5] = "OPLE";
    char b[] = {'O', 'P'};
     
    char* surname = "OPLE";
    char* name = "Shivkumar";

    
    printf("My surname is: %s\n", A);
    A[0] = 'A';
    printf("My Surname is: %s\n", A);

    puts("-------------------------------");

    printf("Surname is %c\n", surname);
    surname[0] = 'A';
    printf("Surname is %c\n", surname);

    exit(0);

}