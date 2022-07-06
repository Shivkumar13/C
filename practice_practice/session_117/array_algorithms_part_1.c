#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

void* xmalloc(size_t size);
//void* xcalloc(size_t nr_elements, size_t size_per_element);
void* xrealloc(void* old_ptr, size_t new_size_in_bytes);
void show(int* p_arr, size_t N, const char* msg);

void get_reversed_array(int* p_arr_src, size_t src_N, int** pp_arr_dest, size_t* p_dest_N);
void reverse_array(int* p_arr_src, size_t src_N);

int main(void)
{
    int* p_arr = NULL;
    size_t N;
    size_t i;

    /* Build Source Array */
    N = 8;
    p_arr = (int*)calloc(N, sizeof(int));
    for(i = 0; i < N; ++i)
        p_arr[i] = (i + 1) * 10;

    /* test get_reversed_Array */
    int* p_arr_reversed = NULL;
    size_t reversed_N = 0;

    get_reversed_array(p_arr, N, &p_arr_reversed, &reversed_N);
    show(p_arr, N, "Original Array");
    show(p_arr_reversed, reversed_N, "Reversed Array");
    free(p_arr_reversed);
    p_arr_reversed = NULL;

    /* test reverse array */
    show(p_arr, N, "Original Array:");
    reverse_array(p_arr, N);
    show(p_arr, N, "Original Array:");
    
    exit(0);
}

void get_reversed_array(int* p_arr_src, size_t src_N, int** p_arr_reversed, size_t* arr_reversed_size)
{
      size_t i;
      int* p_arr_r = NULL;

      p_arr_r = (int*)calloc(src_N, sizeof(int));
      
      for(i = src_N - 1; (long long)i >= 0; --i)
        p_arr_r[src_N - 1 - i] = p_arr_src[i]; 

      /*
      for(i = 0; i < src_N; ++i)
        p_arr_r[i] = p_arr_src[src_N - i - 1];
      */
    *p_arr_reversed = p_arr_r;
    *arr_reversed_size = src_N;
}

void reverse_array(int* p_arr, size_t src_N)
{
    size_t i;
    int tmp;

    for(i = 0; i < src_N/2; ++i)
    {
        tmp = p_arr[i];
        p_arr[i] = p_arr[src_N - 1 - i];
        p_arr[src_N - 1 - i] = tmp;
    }
}

void show(int* p_arr, size_t N, const char* msg)
{
    size_t i;

    if(msg)
        puts(msg);
    
    for(i = 0; i < N; ++i)
        printf("p_arr[%llu]:%d\n", i, p_arr[i]);
}