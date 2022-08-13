#include <stdio.h>
#include <stdlib.h>

void f(int i);
void g(int i, int j);
void loop(void);

int main(void)
{
    puts("through loop:");
    loop();

    puts("through recursion:");
    f(1);
    return (0);
}




void loop(void)
{
    int i, j;
    for(i = 1; i < 100; i <<= 2)
        for(j = 4; j < 256; j <<= 3)
            printf("i = %d, j = %d\n", i, j);
}