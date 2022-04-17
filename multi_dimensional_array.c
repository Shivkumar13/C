#include <stdio.h>
#include <stdlib.h>

#define N1 5
#define N2 4

#define SUCCESS 0
#define INVALID_ROW_NUMBER 1
#define INVALID_COLUMN_NUMBER 2


int sum_row(int [N1][N2], int rows, int cols, int row_num, int* p_row);
int sum_col(int [N1][N2], int rows, int cols, int col_num, int* p_sum);

int main(void)
{
    int arr[N1][N2];
    int i;
    int j;
    int row_num = 0;
    int col_num = 0;
    int row_sum;
    int col_sum;

    for(i = 0; i < N1; ++i)
    {
        for(j =0; j < N2; ++j)
        {
            arr[i][j] = 3 * i + 7 * j;
        }
    }

    for(i = 0; i < N1; ++i)
    {
        for(j =0; j < N2; ++j)
        {
            printf("arr[%d][%d] = %d\n", i, j, arr[i][j]);
        }
    }

 
    puts("Enter 1 for row calculation | Enter 2 for column calculation");
    int k  = 0;
    scanf("%d", &k);
    
    if(k == 1)
    {
        puts("Enter Row Number to calculate sum");
        scanf("%d", &row_num);
        if(row_num < N1)
           { 
               sum_row(arr, N1, N2, row_num, &row_sum);
               printf("Summation of number %d Row Elements %d\n", row_num, row_sum);
           }
        else
        {
            puts("Invalid Row Number");
        }
    }
    else if(k == 2)
    {
        puts("Enter Column Number to calculate sum");
        scanf("%d", &col_num);
        if(col_num < N2)
        {
            sum_col(arr, N1, N2, col_num, &col_sum);
            printf("Summation of number %d Column Elements %d\n", col_num, col_sum);
        }
        else
        {
            puts("Invalid Column Number");
        }
    }
    else
    {
        puts("Invalid Option!");
    }
    // switch (k)
    // {
    // case 1: 
    //     puts("Enter row number to calculate sum");
    //     scanf("%d", &row_num);  
    //     sum_row(arr, N1, N2, row_num, &row_sum);
    //     printf("Summation of number %d Row Elements %d\n", row_num, row_sum);
    //     break;
    // case 2:
    //      puts("Enter column number to calculate sum");
    //      scanf("%d", &col_num); 
    //      sum_col(arr, N1, N2, col_num, &col_sum);
    //      printf("Summation of number %d Column Elements is %d\n", col_num, col_sum);
    //      break;
    // default:
    //     printf("Please enter a valid number");
    //     break;
    // }
    
    exit(0);
}

int sum_row(int A[N1][N2], int rows, int cols, int row_num, int* p_sum)
{
    int sum = 0;
    
    // if (row_num <= rows)
    // {
        for(int j = 0; j < cols; ++j)
          {
             sum = A[row_num][j] + sum;
          }
    // }
    // else
    // {
    //     return INVALID_ROW_NUMBER;
    // }

    *p_sum = sum;

    return SUCCESS; 
}

int sum_col(int A[N1][N2], int rows, int cols, int col_num, int* p_sum)
{

    int sum = 0;
    // if(col_num <= cols)
    // {
        for(int i = 0; i < rows; ++i)
        {
            sum = A[i][col_num] + sum;
        }
    // }
    // else
    // {
    //     return INVALID_COLUMN_NUMBER;
    // }

    *p_sum = sum;

    return SUCCESS;
}
