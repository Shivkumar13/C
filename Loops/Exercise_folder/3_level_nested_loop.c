#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i;
    //snails loop
    for(i = 0; i < 5; ++i)
        {
            printf("In the snail loop %d\n", i);

            //tortoise loop
            for(int j=0; j < 5; ++j)
            {
                printf("\t\tIn the tortoise loop %d\n", j);
                
                //rabbit loop
                for(int k =0; k < 5; ++k)
                {
                    printf("\t\t\tIn the rabbit loop %d\n", k);
                }

            }
        }

    exit(0);
}
