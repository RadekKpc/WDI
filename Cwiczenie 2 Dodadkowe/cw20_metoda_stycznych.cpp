#include <iostream>
#include <cmath>
using namespace std;

bool czy_pierwsza(int a){

        for(int i=2;i<=sqrt(a);i++)
            if(a%i==0)
                return false;
        return true;
    }

int dlugosc(int a){
        int i = 0;
        for(i;a>0;a/=10)
            i++;

        return i;
    }

int potega(int a,int b){
    int c =a;
    if(b==0)
        return 1;

    for(int i=b;i>1;i--)
        a*=c;

    return a;
}

int suma_cyfr(int a){
      int s=0;
    for(a;a>0;a/=10)
        s+=a%10;
    return s;
}

int main()
{
    double x2,x = 1;
    double eps = 1e-8;
    double a,b;

     while(abs(x-x2)>eps)
     {
        a=2*x;
        b=(x*x)-2017-a*x;
        x2=(-b/a);
        cout<<x2<<endl;
        a=2*x2;
        b=(x2*x2)-2017-a*x2;
        x=(-b/a);
        cout<<x<<endl;
     }
     cout<<x;
}
