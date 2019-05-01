#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 8;
using namespace std;
czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
void zbior(int tab[],int n)
{
    int k=0;
    for(int i=2;i<=n;i++)
    {
            if(n%i==0 and czy_pierwsza(i)){
                tab[k]=i;
                k++;
            }
    }
}
int  sipp(int t[20],int l,int iloczyn)
{      //    cout<<l<<" iloczyn "<<iloczyn<<endl;
        return (l==20) ? (iloczyn>1) ? iloczyn : 0 : sipp(t,l+1,iloczyn*t[l])+sipp(t,l+1,iloczyn);
}
int main()
{
    int a =60;
    int tab[20];
    int k=0;
    int s=0;
    for(int i=0;i<20;i++)tab[i]=0;
    zbior(tab,a);
    for(int i=0;i<20;i++)
       {cout<<tab[i]<<" ";
        if(tab[i]!=1)k++;
       }
    cout<<endl<<"sipp "<<sipp(tab,0,1);
}
