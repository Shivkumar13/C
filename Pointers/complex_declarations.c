#include <stdio.h>
#include <stdlib.h>

struct date {
    int day;
    int month;
    int year;
};

void ptr_to_built_in(void);
void ptr_to_arr(void);
void ptr_to_func(void);
void ptr_to_struct(struct date* pp);
void ptr_to_ptr(void);
void insertion_sort(int* p_arr, int size);


int main(void)
{
    

    struct date* ptr_struct = NULL;

    ptr_struct =  (struct date*)malloc(sizeof(struct date));
    
    ptr_to_struct(ptr_struct);
    printf("day = %d, month = %d, year = %d\n", ptr_struct->day, ptr_struct->month, ptr_struct->year);

    free(ptr_struct);
    ptr_struct = NULL;

}

void ptr_to_built_in(void)
{
    int n;
    int m;

    int* p;

    p = &n;  //put address of n in p
    *p = 100;   // write 100 on the address in p, i.e. n
    m = *p; // write 100 in m
}

// void ptr_to_arr(void)
// {
//     int arr[5];
//     int (*p)[5];

//     int i;

//     p = &arr;

//     for(i = 0; i < 5; ++i)
//     {
//         (*p)[i] = (i + 1) + 100;
//     }
// }

void ptr_to_arr(void)
{
    int arr[5];
    int (*p)[5];

    int i;

    p = &arr;

    for(i = 0; i < 5; ++i)
    {
        (*p)[i] = (i + 1) * 100;

    }
}

// void ptr_to_arr(void)
// {
//     int int_arr[10];

//     int (*p)[10];

//     p = &int_arr;

//     for(int i = 0; i < 10; ++i)
//     {
//         (*p)[i] = (i + 1) * 10;

//     }
// }


void ptr_to_func(void)
{
    void (*pfn)(int*, int);
    pfn = insertion_sort;

    pfn(NULL, 0);
}

void insertion_sort(int* p, int pp)
{
    puts("Something");
}


void ptr_to_struct(struct date* ptr_struct)
{
    ptr_struct->day = 13;
    ptr_struct->month = 07;
    ptr_struct->year = 1997;

    printf("day = %d, month = %d, year = %d\n", ptr_struct->day, ptr_struct->month, ptr_struct->year);
  
}

