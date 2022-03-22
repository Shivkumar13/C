#include <stdio.h>
#include <stdlib.h>

struct box
{
    float width;
    float height;
    float length;  
};

int main(void)
{
    struct box inB;
    struct box* ptr_inB;

    ptr_inB = &inB;
    ptr_inB->width = 4.7;
    ptr_inB->height = 8.9;
    ptr_inB->length = 3.4;

    printf("ptr_inB->width=%f, ptr_inB->height=%f, ptr_inB->length=%f\n", ptr_inB->width, ptr_inB->height, ptr_inB->length);

    ptr_inB->width = 9.0;
    ptr_inB->height = 9.7;
    ptr_inB->length = 9.8;

    printf("ptr_inB->width=%f, ptr_inB->height=%f, ptr_inB->length=%f\n", ptr_inB->width, ptr_inB->height,ptr_inB->length);

    exit(0);
}