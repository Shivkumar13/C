#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char* p1 = (char*)1000;
    short* p2 = (short*)1000;
    int* p3 = (int*)1000;
    double* p4 = (double*)1000;

    printf("p1 + 1 = %llu\n", (unsigned long long int)(p1 + 1));
    printf("p2 + 1 = %llu\n", (unsigned long long int)(p2 + 1));
    printf("p3 + 1 = %llu\n", (unsigned long long int)(p3 + 1));
    printf("p4 + 1 = %llu\n", (unsigned long long int)(p4 + 1));

    exit(0);
}