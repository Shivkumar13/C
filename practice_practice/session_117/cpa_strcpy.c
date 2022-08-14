#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

size_t cpa_strlen(const char* str);
size_t cpa_strcpy(char* dest_str, const char* src_str);

int main(void)
{
    char* str;
    size_t length;
    char* dest_str;
    int i = 0;

    printf("Enter a string to measure its length and copy to a new string:");

    str = (char*)malloc(sizeof(char) * 16);
    assert(str != NULL);
    scanf("%s", str);

    dest_str = (char*)malloc(sizeof(char) * 16);
    
    length = cpa_strcpy(dest_str, str);
    printf("Length of string is %llu, copied string is: %s\n", length, dest_str);
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

size_t cpa_strcpy(char* dest_str, const char* src_str)
{
    int i = 0;

    size_t str_len = cpa_strlen(src_str);

    for(i = 0; i < str_len; ++i)
    {
        dest_str[i] = src_str[i];
    }

    *(dest_str + str_len) = '\0';

    return str_len;
}