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
    int a,b,i,r;
    int reszty[100];
    bool flaga = true;
    for(i =0;i<100;i++)
        reszty[i]=0;
    cin>>a>>b;

    int l =a;
    for(i =0;flaga;i++)
    {
        reszty[i]=(l%b)*10;
        l=(l%b)*10;
        for(int j = 0;j<i;j++)
            for(int k =j+1;k<=i;k++)
                if(reszty[j]==reszty[k])
                    {flaga=false;
                        r=reszty[j];
                    }
    }

    cout<<a/b<<".";
    for(int j=0;j<i-1;j++)
    {
        a=(a%b)*10;
        if(a==r)
            cout<<"(";
        cout<<a/b;
    }
    cout<<")";




}
