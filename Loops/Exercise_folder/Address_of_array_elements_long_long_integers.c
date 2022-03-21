#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned long long int lli_arr[8] = {222222,222334,4546567,87889,544546,3453546,323435,646576};
    int i;

    for(i =0; i < 8; ++i)
        printf("Unsigned long long integers at index %d is %llu and its address is %llu\n", i, lli_arr[i], (unsigned long long int)&lli_arr[i]);

    exit(0);
}