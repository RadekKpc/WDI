#include <iostream>
#include <cmath>

using namespace std;
const double eps = 1e-8;


int main()
{
    double a = sqrt(2 + sqrt(2));
    double b = sqrt(2)*a/4;
    double c;


    while(abs(c-b)>eps)
    {
       a=sqrt(2 + a);
       c=b;
       b*=a/2;
       cout<<2/b<<endl;
    }

}

