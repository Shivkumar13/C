#include <stdio.h>
#include <stdlib.h>

struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{
    struct date date_1;

    printf("Enter the date, day");
     scanf("%d", &date_1.day);
    printf("Enter the month");
    scanf("%d", &date_1.month);
    printf("Enter the year");
    scanf("%d", &date_1.year);

    printf("Entered date is: %d-%d-%d\n", date_1.day, date_1.month, date_1.year);
    
    exit(0);
}
