#include <stdio.h>
#include <stdlib.h>

struct A
{
    int a;
    char b;
    float c;
};

int main(void)
{
    struct A* p_str = (struct A*)1000;
    int i;

    printf("sizeof(struct A):%llu\n", sizeof(struct A));
    for(i = 0; i < 5; ++i)
        printf("p + %d =%llu\n", i, (unsigned long long int)(p_str+i));
    
    exit(0);
}