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
    for(int i = 1;i<1000;i++)
        for(int j =i+1;j<1000;j++)
            for(int k=j+1;k<i+j;k++)
                if(i*i + j*j == k*k)
                    cout<<"("<<i <<","<<j<<","<<k<<")"<<endl;
}
