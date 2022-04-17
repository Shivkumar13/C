#include <stdio.h>
#include <stdlib.h>

#define R 5
#define C 5

#define SUCCESS 0

void initialize(int [R][C], int nr_rows, int r_cols);
int sum_row(int [R][C], int nr_rows, int nr_cols, int row_num, int* p_sum);
int sum_col(int [R][C], int nr_rows, int nr_cols, int col_num, int* p_sum);

int main(void)
{
    int arr[R][C];

    int row_num = 3;
    int col_num = 4;
    int row_sum = 0;
    int col_sum = 0;

    initialize(arr, R, C);
    sum_row(arr, R, C, row_num, &row_sum);
    sum_col(arr, R , C, col_num, &col_sum);

    printf("Sum of row elements is %d\n", row_sum);
    printf("Sum of column elements is %d\n", col_sum);

    exit(EXIT_SUCCESS);
}

void initialize(int a[R][C], int n_rows, int n_col)
{
    int i, j;

    for(int i = 0; i < R; ++i)
    {
        for(int j = 0; j < C; ++j)
        {
            a[i][j] = 3 * i + 4 * j;
        }
    }

    for(i = 0; i < R; ++i)
    {
        for(int j = 0; j < C; ++j)
        {
            printf("Array element at index A[%d][%d]: %d\n", i, j, a[i][j]);
        }
    }
}

int sum_row(int arr[R][C], int nr_rows, int nr_cols, int r_num, int* p_sum)
{
    int i;
    int sum = 0;

    for(int i = 0; i < nr_cols; ++i)
    {
        sum = arr[r_num][i] + sum;    
    }

    *p_sum = sum;
    return SUCCESS;
}


int sum_col(int arr[R][C], int nr_rows, int nr_cols, int c_num, int* p_sum)
{
    int i;
    int sum = 0;

    for(i = 0; i < nr_rows; ++i)
    {
        sum = arr[i][c_num] + sum;
    }
    
    *p_sum = sum;

    return SUCCESS;

}
