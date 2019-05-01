#include <iostream>
#include <cmath>

using namespace std;

const double eps = 1e-8;
int main()
{
    double s;
    cin>>s;
    double a=1.0;
    double b=0.0;

    while(abs(a-b)>eps)
    {
        b=a;
        a=(s/pow(a,2)+2*a)/3.0;
    }
    cout << a;
}

