#include <stdio.h>
#include <stdlib.h>


  void dynamic_struct(void);
  void dynamic_array_of_structure(void);
  void dynamic_array_of_ptrs_to_structure(void);

struct date
{
    int day;
    int month;
    int year;
};

int main(void)
{

    dynamic_struct();
    dynamic_array_of_structure();
    dynamic_array_of_ptrs_to_structure();

    return(0);
}

