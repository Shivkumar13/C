#include <stdio.h>
#include <stdlib.h>

size_t cpa_strlen(const char* str);

int main(void)
{
    char* str;
    size_t length;

    printf("Enter a string:");
    str = (char*)malloc(sizeof(char) * 16);

    scanf("%s", str);

    length = cpa_strlen(str);
    printf("Length of string is %llu\n", length);
    
}

size_t cpa_strlen(const char* str)
{
    int i = 0;

    while(*(str + i) != '\0')
    {
        i = i + 1;
    }

    return (i);
}





































































