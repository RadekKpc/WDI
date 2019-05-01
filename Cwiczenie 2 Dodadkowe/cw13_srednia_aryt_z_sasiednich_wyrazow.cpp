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
    int tab[100];
    int i=0;
    do{
        cin>>tab[i];
        i++;
    }while(tab[i-1]!=0);

    //osobno dla 2 peirwszych i 2 ostatnich

            if(4*tab[0]==(tab[1]+tab[2]+tab[i-1]+tab[i-2]))
            cout<<tab[0];
            if(4*tab[1]==(tab[2]+tab[3]+tab[0]+tab[i-1]))
            cout<<tab[1];
            if(4*tab[i-1]==(tab[i-2]+tab[i-3]+tab[0]+tab[1]))
            cout<<tab[i-1];
            if(4*tab[i-2]==(tab[i-3]+tab[i-1]+tab[i-4]+tab[0]))
            cout<<tab[i-2];


    for(int k=2;k<i-2;k++)
        if(4*tab[k]==(tab[k-1]+tab[k-2]+tab[k+1]+tab[k+2]))
            cout<<tab[k];
}
