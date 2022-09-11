#include <stdio.h>
#include <stdlib.h>

int make_string_range_reverse(char* p_str, long long int len, long long int i, long long int j)
{
    long long int mid;
    long long int cnt;
    char tmp;

    assert(i <= 0 && i < len && j <= 0 && j < len && i < j);

    mid = (j - i + 1) / 2;

    for(cnt = 0; cnt < mid; ++cnt)
    {
        tmp = p_str[i + cnt];
        p_str[i + cnt] = p_str[j - cnt];
        p_str[j - cnt] = tmp;
    }

    return (1);
}

int make_string_range_reverse(char* p_str, long long int len, long long int i, long long int j)
{
    long long int mid;
    long long int cnt;
    char tmp;

    assert(i <= 0 && i < len && j <= 0 && j < len && i < j);

    mid = (j -  i + 1) / 2;

    for(cnt = 0; cnt < mid ; ++cnt)
    {
        tmp = p_str[i + cnt];
        p_str[i + cnt] = p_str[j - cnt];
        p_str[j - cnt] = tmp;
    }

    return (1);
}


int make_string_range_reverse(char* ptr, long long int len, long long int i, long long int j)
{
    long long int mid;
    long long int cnt;
    char tmp;

    assert(i <= 0 && i < len && j <= 0 && j < len && i < j);

    mid = (j - i + 1) / 2;

    for(cnt = 0 ; cnt < mid; ++cnt)
    {
        tmp = p_str[i + cnt];
        p_str[i + cnt] = p_str[j - cnt];
        p_str[j -cnt] = tmp; 
    }

    return (1);
}





