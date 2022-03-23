#include <stdio.h>
#include <stdlib.h>

struct book
{
    float bk_price;
    char* bk_author;
    int bk_pages;
    char* bk_isbn;
    char* bk_name;
};


struct book book_arr[3] = {
            {
                499.87,
                "Michael kerrisk",
                900,
                "1087-123-456-2345",
                "understanding the linux kernel" 
            },
            {
                800.87,
                "Michael john",
                200,
                "1034-137-456-2345",
                "I don't know the book name" 
            },
            {

                800.87,
                "Shiv_Op",
                500,
                "1034-137-456",
                "Book_3" 

            }
};

int main(void)
{
     
      puts("Printing the array of structure book:");

      for(int i =0; i < 3; ++i)
       {            
         printf("Array elements of structure's array are-> Price: %f, Author: %s, Pages: %d, ISBN: %s, Book_Name: %s\n", book_arr[i].bk_price,  book_arr[i].bk_author, book_arr[i].bk_pages, book_arr[i].bk_isbn, book_arr[i].bk_name);
       }

       exit(0);
}