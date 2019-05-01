#include <iostream>
#include <cmath>
using namespace std;

const double eps=1e-8;

double fun(double x)
{
    return pow(pow(x,x),x) -4;
}

int main()
{
    double a =0;
    double b =3.0;
    double x;
    double f;

    while(b-a>eps)
    {
        x=(a+b)/2.0;
        f=fun(x);
        if(f<0)
            a=x;
        else
            b=x;
    }
    cout << x;
    return 0;
}

