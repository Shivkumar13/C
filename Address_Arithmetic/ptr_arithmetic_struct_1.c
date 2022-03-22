#include <stdio.h>
#include <stdlib.h>

struct test_addr
{
    int i;
    float f;
    char c;
};

int main(void)
{

    struct test_addr inA;
    struct test_addr* ptr;

    ptr = (struct test_addr*)1000;

    printf("Size of struct = %llu\n", sizeof(struct test_addr));

    for(int i=0; i < 5; ++i)
    {
        printf("Pointer arithmetic of structure is %llu\n", (unsigned long long int)(ptr+i));
    }

    exit(0);

}