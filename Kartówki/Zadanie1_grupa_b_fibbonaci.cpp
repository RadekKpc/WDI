#include <iostream>
#include <cmath>
using namespace std;

    const int N=1000;

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

int fukncja(int tab[N])
{


}
czy_jest_suma(int i)
{
    int a= 1;  // 1 , 1 , 2 , 3 , 5
    int b= 1;
    int c = 2;
    int suma =0;

    while(suma<i){
        suma+=a;
        a=b;
        b=c;
        c=a+b;

    }
    a=1;
    b=1;
    c=2;
    while(suma>=i)
    {
       if(suma==i)
            return false;
       suma-=a;
       a=b;
       b=c;
       c=a+b;
    }

    return true;

}
int main()
{   int a;
    cin>>a;
    for(int i=a+1;i<1000;i++)
        if(czy_jest_suma(i))
    {
        cout<<i;
        return 0;
    }

}


