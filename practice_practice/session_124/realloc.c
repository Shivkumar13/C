#include<stdio.h>
#include <stdlib.h>


void test_string_append(void);
void* xrealloc(void* old_ptr, size_t new_size);


int main(void)
{
    test_string_append();
    return (0);
}


void test_string_append(void)
{
    char* p_str = "sangam";
    char* p_append = "ishwar";
    int i;
   
    p_append = (char*)xrealloc(p_str, sizeof(char) * 16);
    assert(p_append != NULL);

    for(i = 0; i < 16; ++i)
        p_append[i] = i*65;

    for(i = 0; i < 16; ++i)
        printf("p_append[%d] = %c\n",i, p_append[i]);
    
}

void* xrealloc(void* old_ptr, size_t new_size)
{
    void* new_ptr = NULL; 

    new_ptr = realloc(old_ptr, new_size); 
    assert(new_ptr != NULL); 
    return (new_ptr); 
}
