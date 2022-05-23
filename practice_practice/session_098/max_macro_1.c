#define MAX(a, b)  ((a) > (b) ? (a) : (b))

int main(void)
{
    int m1 = 1, m2 = 4;
    float f1 = 2.2f, f2 =3.2f;
    double d1 = 3.4, d2 = 5.4;
    int ret1;
    float ret2;
    double ret3;

    ret1 = MAX(m1, m2);
    ret2 = MAX(f1, f2);
    ret3 = MAX(d1, d2);

    printf("ret1 = %d, ret2 = %f, ret3 = %lf\n", ret1, ret2, ret3);

    return(0);
}