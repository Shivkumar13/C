#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char c[10];
    int i;
    int res_num;

    char I = 1;
    char V = 5;
    char X = 10;
    char L = 50;
    char C = 100;
    unsigned short D = 500;
    unsigned short M = 1000;

    printf("Enter a roman number:\n");
    scanf("%c", &c);
    printf("This is entered string %s\n", c);


    for(int i = 0; i < sizeof(c); ++i)
    {
        res_num = 0;
        res_num = res_num + (int)c[i];
    }

    printf("res_num = %d\n", res_num);

    exit(0);   

}