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

int skoki(int t[N],int l,int i)
{
    cout<<"jestem w "<<l<<" indeks "<<i<<endl;
    if(i==N-1)return l;
    for(int j = 2 ;j<=t[l] & i< N;j++)
        if(t[i]%j==0 & czy_pierwsza(j))
            {int p =skoki(t,l+1,i+j);
                if(p==-1)continue;
                    else return p;
            }
    return -1;

}


int main()
{
    int t[N]={6,5,2,6,11,9,5,5};

    cout<<skoki(t,0,0)<<endl;

    return 0;
}
