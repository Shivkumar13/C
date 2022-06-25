#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int date;
    int month;
    int year;
};

struct publishing_company
{
    char* company_1;
    char* company_2;

};

struct Book
{
    char* book_name;
    char* book_author_name;
    char* book_ibn_code;
    float book_price;
    int   book_nr_of_pages;
    char* book_cover_color;
    char* book_category;
    struct Date book_release_date;
    struct publishing_company companies;
};

int main(void)
{
    //struct Book first_book_entry;

    struct Book* p_struct_book = (struct Book*)malloc(sizeof(struct Book));


    puts("-------->> Input your book details below <<---------");
    
    puts("Enter book price:");
    scanf("%f", &p_struct_book->book_price);

    puts("Enter the book number of pages:");
    scanf("%d", &p_struct_book->book_nr_of_pages);

    p_struct_book->book_name = (char*)malloc(sizeof(char*));
    puts("Enter the book name:");
    scanf("%s", p_struct_book->book_name);

    p_struct_book->book_author_name = (char*)malloc(sizeof(char*));
    puts("Enter the book author name:");
    scanf("%s", p_struct_book->book_author_name);

    p_struct_book->book_ibn_code = (char*)malloc(sizeof(char*));
    puts("Enter the book ibn code:");
    scanf("%s", p_struct_book->book_ibn_code);


    p_struct_book->book_cover_color = (char*)malloc(sizeof(char*));
    puts("Enter the book cover color:");
    scanf("%s", p_struct_book->book_cover_color);

    p_struct_book->book_category = (char*)malloc(sizeof(char*));
    puts("Enter the category of the book:");
    scanf("%s", p_struct_book->book_category);

    puts("Enter the book release date:");
    puts("Enter the day:");
    scanf("%d", &p_struct_book->book_release_date.date);

    puts("Enter the month:");
    scanf("%s", &p_struct_book->book_release_date.month);
    
    puts("Enter the year:");
    scanf("%s", &p_struct_book->book_release_date.year);

    puts("Enter the publishing company names:");
    puts("Enter the 1st company name:");
    p_struct_book->companies.company_1 = (char*)malloc(sizeof(char*));
    scanf("%s", p_struct_book->companies.company_1);


    puts("Enter the 2nd company name:");
    p_struct_book->companies.company_2 = (char*)malloc(sizeof(char*));
    scanf("%s", p_struct_book->companies.company_2);


    printf("Book Price: %f\n", p_struct_book->book_price);
    printf("Book name is: %s\n", p_struct_book->book_name);
    printf("Book nr of pages: %d\n", p_struct_book->book_nr_of_pages);
    printf("Book cover color: %d\n", p_struct_book->book_cover_color);
    printf("Book release date: %d/%d/%d\n", p_struct_book->book_release_date.date, p_struct_book->book_release_date.month, p_struct_book->book_release_date.year);
    printf("Book publishing comapnies: %s & %s\n", p_struct_book->companies.company_1, p_struct_book->companies.company_2);
    printf("Book category: %s\n", p_struct_book->book_category);
    printf("Book Author Name: %s\n", p_struct_book->book_author_name);
    printf("Book ibn code: %s\n", p_struct_book->book_ibn_code);

    exit(0);    
}