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
bool rezystory(double t[N],int l,double cel,double w,double r)
    {
        cout<< l << " "<<w<< " "<<r<<endl;
        if(l>N-1)return false;
        if(w == 3)return(r==cel);
        return rezystory(t,l +1 ,cel,w + 1, r+t[l])||rezystory(t,l +1 ,cel,w,r)||rezystory(t,l+1,cel,w+1,(r==0)?t[l]:(r*t[l])/(r + t[l]));

    }
int main()
{
    double t[N]={4,2,3,3,1,1,1,1};
    double r = 0.6;

    if(rezystory(t,0,r,0,0))cout<<"mozile";
}
