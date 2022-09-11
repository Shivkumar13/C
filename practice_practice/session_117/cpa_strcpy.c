#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

size_t cpa_strlen(const char* str);
size_t cpa_strcpy(char* dest_str, const char* src_str);
size_t cpa_strcat(const char* p_src_str, const char* p_dest_str, char* pp_cat_str);
char* cpa_strbuilder(char* p_str, const char* append_str);

int main(void)
{
    char* str = NULL;
    size_t length;
    char* dest_str = NULL;
    int i = 0;

    printf("Enter a string to measure its length and copy to a new string:");

    str = (char*)malloc(sizeof(char) * 16);
    assert(str != NULL);
    scanf("%s", str);

    length = cpa_strlen(str);
    dest_str = (char*)malloc(length + 1);
    
    length = cpa_strcpy(dest_str, str);
    printf("Length of string is %llu, copied string is: %s\n", length, dest_str);

    free(str);
    str = NULL;

    free(dest_str);
    dest_str = NULL;
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

size_t cpa_strcat(const char* p_src_str, const char* p_dest_str, char** pp_cat_str)
{
    char* p_cat_str = NULL;

    size_t src_len, dest_len, cat_len;

    src_len = cpa_strlen(p_src_str);
    dest_len = cpa_strlen(p_dest_str);
    cat_len = src_len + dest_len;

    p_cat_str = (char*)xmalloc(p_cat_str + 1);

    int i = 0;
    while(i < src_len)
    {
        *(p_cat_str + i) = *(p_src_str + i);
        i = i + 1;
    }

    i = 0;
    while(i < dest_len)
    {
        *(p_cat_str + src_len + i) = *(p_dest_str + i);
        i = i + 1;
    }

    *(p_cat_str + cat_len) = '\0';
    *pp_cat_str = p_cat_str;
    
    return (cat_len);

}

char* cpa_strbuilder(char* p_str, const char* append_str)
{
    size_t current_length, additional_length, total_length;
    size_t i;

    current_length = (p_str == NULL) ? 0 : cpa_strlen(p_str);
    additional_length = (p_str == NULL) ? 0 : cpa_strlen(append_str);
    total_length = current_length + additional_length;
    p_str = (char*)xrealloc(p_str, total_length + 1);

    for(i = 0; i < additional_length; ++i)
        *(p_str + current_length + i) = *(append_str + i);
    
    *(p_str + total_length) = '\0';

    return (p_str);
    
}



















