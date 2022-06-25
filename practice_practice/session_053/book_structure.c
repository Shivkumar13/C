#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int date;
    int month;
    int year;
};

struct Book
{

    char* book_name;
    char* book_author_name;
    char* book_ibn_code;
    float book_price;
    char* book_cover_color;
    int   book_nr_of_pages;
    struct Date book_release_date;
};

int main(void)
{
    struct Book my_book = {
        "Shivkumar's Life",
        "Shivkumar Ople",
        "123-234-2335-3454",
        456.67,
        "Indigo",
        400,
        {13, 07, 1997},
    };

    printf("Name of Book is %s\n", my_book.book_name);
    printf("Author name is %s\n", my_book.book_author_name);
    printf("IBN code for the book is %s\n",my_book.book_ibn_code);
    printf("Price for the book is %f\n", my_book.book_price);
    printf("Cover color of the book is %s\n", my_book.book_cover_color);
    printf("Number of pages in the book = %d\n", my_book.book_nr_of_pages);
    printf("Release date for the book is %d/%d/%d\n", my_book.book_release_date.date, my_book.book_release_date.month, my_book.book_release_date.year);

    exit(0);
}