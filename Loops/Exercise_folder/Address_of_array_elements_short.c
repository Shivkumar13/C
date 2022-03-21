#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    unsigned short short_arr[8] = {344,556, 6666, 6633, 5421, 6543, 65535, 65535};
    int i;

    for(i = 0; i < 8; ++i)
        printf("Array element at %d is %hu, with address %llu\n", i, short_arr[i], (unsigned long long int)&short_arr[i]);

    exit(0);

}