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

void procedure(int i,int wykr,int l,int r,int d,int mnoznik)
{   cout<<l<<" liczba "<<i<<" result "<<r<<" mnoznik"<<mnoznik<<endl;

    if(l==d)
    if(wykr>0 & czy_pierwsza(r) & dlugosc(r)>1){
            cout<<r<<endl;
    return;
    }
    else
    return;

    procedure(i%mnoznik,wykr+1,l+1,r*10+(i/mnoznik),d,mnoznik/10);
    procedure(i%mnoznik,wykr,l+1,r,d,mnoznik/10);

}


int main()
{


    procedure(171,0,0,0,dlugosc(171),100);
    return 0;
}
