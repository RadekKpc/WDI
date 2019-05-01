#include <iostream>
#include <cmath>
#include <string>

const int N = 6;
using namespace std;
czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
int potega(int a,int b){
    int c =1;
    if(b==0)
        return 1;
    if(b==1)
        return a;
    for(int i =1;i<=b;i++)
    {
        c*=a;
    }
    return c;
}

void najmniejszy_niepusty(int t[N],int se, int si,int l,int ie,int & in,int & r)
{   cout<<"jestem w "<<l<<" suma e "<<se<<" sumai "<<si<<" ilosc e "<<ie<<" najmniejszy "<<in<<"suma najmniej "<<r<<endl;
    if(l==N)if(se == si & ie>= in){in = ie; r=se; return ;}else return;
    najmniejszy_niepusty(t,se+t[l],si + l,l+1,ie+1,in,r);
    najmniejszy_niepusty(t,se,si,l+1,ie,in,r);
}

int znajdz(int t[N])
{
    int in=0;
    int r=0;
    najmniejszy_niepusty(t,0,0,0,0,in,r);
    return r;
}
int main()
{
    int t[N]={1,7,3,5,11,2};
    cout<<znajdz(t);

}
