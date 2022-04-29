#include <iostream>
using namespace std;
 
float round(float F)
{
    float value = (int)(F * 100 + .5);
    return (float)value / 100;
}
 
float force(double m1, double m2, double r)
{
    float G;
    G = 6.67 / 1e11;
    float F;
    F = (G * m1 * m2) / (r * r);
     
    // Not Rounding to two digits after decimal
    return F;
}
 
// Driver code
int main()
{
    float m1, m2, r;
    m1 = 21423.2364;
    m2 = 234254.22534;
    r = 30;
     
    cout << "The Gravitational Fource is: "
         << force(m1, m2, r) << "N\n";
     
    return 0;
}
 