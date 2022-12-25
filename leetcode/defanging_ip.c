#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

char* defangIPaddr(char* address);

int main(void)
{
    char* ip_addr = "1.1.1.1";
    char* result_ip = NULL;
    int i;

    result_ip = defangIPaddr(ip_addr);

    while(result_ip[i] != '\0')
    {
        printf("Result IP: %c\n", result_ip[i]);
        i++;
    }

    exit(0);
}


char* defangIPaddr(char* address)
{
    int i = 0;
    int count = 0;
    int dot_count = 0;

    while(address[i] != '\0')
    {
        if(address[i] == '.')
        {
            dot_count++;
        }
        i++;
        count++;
    }
    printf("count = %d\n", count);
    printf("dot_count = %d\n", dot_count);

    char* fake_address = NULL;
    fake_address = calloc(30, sizeof(char));
    assert(fake_address != NULL);

    i = 0;
    int j = 0;
    while(address[i]!='\0')
    {
        printf("%c %d %d \n",address[i],i, j);
        if(address[i] == '.')
        {
            fake_address[j++] = '[';
            fake_address[j+2] = '.';
            fake_address[j+3] = ']';
            j=j+3;
            // i++;
        }else{
            fake_address[j] = address[i];
            j++;
        }

        // fake_address[j] = address[i];
        i++;
    }


    return(fake_address);
}