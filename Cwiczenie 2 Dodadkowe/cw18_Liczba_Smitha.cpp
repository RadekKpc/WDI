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

    int s,s2;


        for(int k=2;k<1000000;k++){
        s=0;
        s2=1;
        for(int i=2;s2!=k;i++)
            if(k%i==0 && czy_pierwsza(i))
                for(int j=k;j%i==0;j/=i)
                     {s2*=i;
                     s+=suma_cyfr(i);
                     }

        if(s==suma_cyfr(k)&& !czy_pierwsza(k))
            cout<<k<<endl;
        }


}
