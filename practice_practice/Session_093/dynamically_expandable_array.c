#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    



}

void input()
{
    int choice;
    int n;


    while(1)
    {
        printf("Do you want to enter one more integer?: [1-YES|0-NO]");
        scanf("%d", &choice);

        if(choice)
        {
            printf("Enter a new integer");
            scanf("%d", &n);

            int* p_int = (int*)xcalloc(1, sizeof(int));
            assert(p_int != 0);

            


        }
    }
}