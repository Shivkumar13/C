#include <stdio.h>
#include <stdlib.h>

void test(void);

struct X
{
    int d;
    int* p;
};

struct Y
{
    int d;
    struct Y* p;
};

int main(void)
{

    struct X inx1, inx2, inx3;

    inx1.p = &inx2.d;
    inx2.p =  &inx3.d;
    inx3.p = NULL;

    struct X* pX;    

    pX = &inx1;

    printf("pX->p = %p\n", pX->p);
    printf("&inx2.p = %p\n", &inx2.d);

    test();

    exit(0);
}

void test(void)
{
    struct Y iny1, iny2, iny3;

    iny1.d = 100;
    iny2.d = 200;
    iny3.d = 400;

    iny1.p = &iny2;
    iny2.p = &iny3;
    iny3.p = NULL;

    struct Y* pY = &iny1;

    printf("&iny1 = %p, iny1.p = %p\n", &iny1, iny1.p);
    printf("&iny2 = %p, iny2.p = %p\n", &iny2, iny2.p);
    printf("&iny3 = %p, iny3.p = %p\n", &iny3, iny3.p);


    printf("pY->d = %d, pY->p = %p\n", pY->d, pY->p);                           // iny1.d   iny1.p
    printf("pY->p->d = %d, pY->p->p = %p\n", pY->p->d, pY->p->p);               //iny2.d    iny2.p
    printf("pY->p->p->d = %d, pY->p->p->p = %p\n", pY->p->p->d, pY->p->p->p);   //iny3.d    iny3.p
}

/*
Shivkumar's~/C/practice_practice/session_126>./a.out 
pX->p = 0x7ffc19956990
&inx2.p = 0x7ffc19956990
&iny1 = 0x7ffc19956950, &iny1.p = 0x7ffc19956958
&iny2 = 0x7ffc19956940, &iny2.p = 0x7ffc19956948
&iny3 = 0x7ffc19956930, &iny3.p = 0x7ffc19956938
pY->d = 100, pY->p = 0x7ffc19956940
pY->p->d = 200, pY->p->p = 0x7ffc19956930
pY->p->p->d = 400, pY->p->p->p = (nil)
*/








