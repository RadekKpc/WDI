#include <iostream>
#include <cmath>
const int N = 6;
using namespace std;
int czy_pierwsza(int i)
{
    for(int j=2;j<=sqrt(i);j++)
        if(i%j==0)return false;

    return true;
}

int ilosc_dzielnikow_pierwszych(int n){
    int r=0;

    if(n==1)return r;

    for(int i =2;i<=n;i++)
        if(czy_pierwsza(i) && n%i==0)r++;

    return r;
}

bool waga_liczby(int s1,int s2,int s3,int t[N],int i){
return (i==N)? (s1==s2 &&s2==s3) :waga_liczby(s1+t[i],s2,s3,t,i+1)||waga_liczby(s1,s2+t[i],s3,t,i+1)||waga_liczby(s1,s2,s3+t[i],t,i+1);
}



int main()
{
    int t[N]={7,3,4,5,3,7};
    int okreslona_masa = 15;
    bool p[N]={false,false,false,false,false};

    for(int i=0;i<N;i++){
        t[i]=ilosc_dzielnikow_pierwszych(t[i]);
        cout<<t[i]<<" ";
    }
    if(czy_pierwsza(4))cout<<"4 jes piwera";
    if(waga_liczby(0,0,0,t,0))cout<<"jest";


    return 0;
}
