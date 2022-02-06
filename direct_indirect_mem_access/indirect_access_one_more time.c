#include <stdio.h>
#include <stdlib.h>

int a = 20;
int *pa = &a;

char ch;
char* pch = &ch;

int main(void)

{
    printf("Address of a is:%llu \n", (unsigned long long)&a);
    printf("Value at a BEFORE executing `*pa = 137` is %d\n", a);
    printf("Address IN pa before executing `*pa = 137` %llu\n", (unsigned long long)pa);
 
    *pa = 137;

    printf("Value at a after executing `*pa = 137` is %d\n", a);
    printf("Address IN pa after executing `*pa = 137`is %llu\n", (unsigned long long)pa);
    puts("Character Pointer Demo starts here...");
  
    printf("Value ");

    exit(0);
}