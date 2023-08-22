#include <stdio.h>
#include <stdlib.h>

void show(int* a, int size, const char* msg);
void insert_at_sorting_pos(int* a, int Size);


int main(void)
{
    int a[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 25};
    show(a, 10, "Showing Unsorted Array\n");
    insert_at_sorting_pos(a, 10);
    show(a, 10, "Showing sorted Array\n");

    return 0;
}

void insert_at_sorting_pos(int* a, int Size)
{
    int key, i;

    key = a[Size-1];
    i = Size-2;

    while(i > -1 && a[i] > key)
    {
        a[i+1] = a[i];
        i = i -1;
    }

    a[i+1] = key;

}

void show(int* a, int size, const char* msg)
{
    if(msg)
        puts(msg);

    for(int i = 0; i < size; ++i)
    {
        printf("Showinf array index %d: %d\n", i, a[i]);
    }

}