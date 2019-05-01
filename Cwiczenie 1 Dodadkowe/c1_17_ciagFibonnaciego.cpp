#include <iostream>
#include <cmath>

using namespace std;

const double eps = 1e-8;
int main()
{
    double a;
    double b;
    double c=-1;
    cin>>a>>b;

    while(abs(a/b-c)>eps)
    {
        c=a/b;
        a=a+b;
        if(abs(c-b/a)<=eps)
        {
            cout<<b/a;
            return 0;
        }
        c=b/a;
        b=a+b;
    }
    cout << a/b;
}

