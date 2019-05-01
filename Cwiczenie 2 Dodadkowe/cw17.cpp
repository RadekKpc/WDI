#include <iostream>
#include <cmath>
using namespace std;

bool czy_pierwsza(int a)
    {
        for(int i=2;i<=sqrt(a);i++)
            if(a%i==0)
                return false;
        return true;
    }
int dlugosc(int a)
    {
        int i = 0;
        for(i;a>0;a/=10)
            i++;

        return i;
    }

int potega(int a,int b)
{
    int c =a;
    if(b==0)
        return 1;

    for(int i=b;i>1;i--)
        a*=c;

    return a;
}
int main()
{
  int a,s=0;
  cin>>a;

  for(int i=a;i>0;i/=10)
    s+=potega(i%10,dlugosc(a));

  if(s==a)
    cout<<"T";




}
