#include <iostream>

using namespace std;
const double eps=1e-10;

double silnia(double x)
{
    double s =1.0;

    if(x==1.0||x==0.0)
        return 1.0;
    while(x>1.0)
    {
        s*=x;
        x--;
    }
    return s;
}

int main()
{
    double s=-1.0;
    double e=0.0;
    int i = 0.0;
    while(e-s>eps)
    {   s=e;
        e+=1/silnia(i);
        i++;

    }
    cout<<e;
}

