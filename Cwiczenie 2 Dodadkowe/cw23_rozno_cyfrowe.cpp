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

void zamiana_podstawy(int a,int system)
{

    string s="";
    char T[16]= {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    while(a>0)
    {
        s=T[a%system] + s;
        a/=system;
    }



    cout<<s;

}
int main()
{
    int c,d,i;
    cin>> c>> d;
    char T[16]= {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
    bool flaga = true;

    for(i =2;i<17 & flaga;i++){
            flaga = false;
        for(int j=c;j>0;j/=i)
            for(int k = d; k>0 ;k/=i)
                if(T[j%i]==T[k%i])flaga=true;

    }
    if(i==17)cout<<"Nie ma takiej podstawy";
    else cout<<"Podstawa ta wynosi: " << i-1 << endl;
    zamiana_podstawy(d,i-1);
    cout<<endl;
    zamiana_podstawy(c,i-1);
}
