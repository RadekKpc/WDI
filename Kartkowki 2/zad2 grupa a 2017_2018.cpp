#include <iostream>
#include <cmath>
using namespace std;
static const int N =9;
bool czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}

void wypelnij(int t[N],int befor,int l)
{
    if(l==9){
        for(int i=0;i<9;i++)
        cout<<t[i];
        cout<<endl;
        return;

    }

    if(czy_pierwsza(befor)){
        for(int i=1;i<=9;i++)
            if(!czy_pierwsza(i)&abs(befor - i)>=2)
            {
                t[l]=i;
                wypelnij(t,t[l],l+1);

            }
    }
    else{
        for(int i=1;i<=9;i++)
            if(abs(befor - i)>=2)
            {
                t[l]=i;
                wypelnij(t,t[l],l+1);

            }
    }

}

int main()
{
    int t[N];
    t[0]=1;
    wypelnij(t,1,1);
    return 0;
}
