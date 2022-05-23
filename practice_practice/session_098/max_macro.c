


#define MAX(a, b)  ((a) > (b) ? (a) : (b))

int main(void)
{
    int m1 = 10, m2 = 20;
    float f1 = 1.1f, f2 = 2.3f;
    double d1 = 2.1, d2 = 2.3;

    int ret1;
    float ret2;
    double ret3;

    ret1 = MAX(m1, m2);
    ret2 = MAX(f1, f2);
    ret3 = MAX(d1, d2);

    return(0);


}