#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 4

#define SUCCESS 0

void initialize(int [R][C], int nr_rows, int nr_cols);
int sum_row(int [R][C], int nr_rows, int nr_cols, int rw_num, int* rw_sum);
int sum_col(int [R][C], int nr_rows, int nr_cols, int col_num, int* cl_sum);

int main(void)
{

    int multi_arr[R][C];
    int row_num = 1;
    int col_num = 1;
    int sum_row;
    int sum_col;

    initialize(multi_arr, R, C);
    func_sum_row(multi_arr, R, C , row_num, &sum_row);
    func_sum_col(multi_arr, R, C, col_num, &sum_col);

    printf("Summation of row elements %d\n", sum_row);
    printf("Summation of column elements %d\n", sum_col);

    exit(EXIT_SUCCESS);

}

void initialize(int a[R][C], int r, int c)
{
    int i;
    int j;

    for(i = 0; i < R; ++i)
    {
        for(j = 0; j < C; ++j)
        {
            a[i][j] = 10*i + 10*j;  //Initializing multi-dimensional array 
                                    //by x10 to the row and col number
        }
    }
}

int func_sum_row(int a[R][C], int nr, int nc, int rw_n, int* p)
{
    int i;
    int sum = 0 ;
    if(rw_n < nr)
     {
         for(i = 0; i < nc; ++i)
                {
                    sum = a[rw_n][i] + sum;
                }
     }   
     else{
         puts("Invalid row number!");
         exit(EXIT_FAILURE);
     }

     *p = sum;

     return SUCCESS;
}

int func_sum_col(int a[R][C], int nr, int nc, int cl_n, int* p)
{
    int  i;
    int sum=0;
    if(cl_n < nc)
    {
        for(i =0; i < nr;++i)
        {
            sum = a[i][cl_n] + sum;
        }
    }
    else{
        puts("Invalid column number!");
        exit(EXIT_FAILURE);
    }

    *p = sum;
    return SUCCESS;

}
