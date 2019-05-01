#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 6;
using namespace std;

czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
dlugosc(int n)
{   int l=0;
    for(int i=n;i>0;i/=10)
        l++;
    return l;
}

int ilosc_liczb(int jedynki,int zera,int n){
return (jedynki<0 || zera<0)? 0 : (jedynki==0 & zera==0)? (!czy_pierwsza(n))? 1 : 0 : ilosc_liczb(jedynki-1,zera,n<<1 | 1)+ilosc_liczb(jedynki,zera-1,n<<1);
}


int main()
{
    int a= 3;
    int b=3;

    cout<<ilosc_liczb(a-1,b,1);

    return 0;
}
