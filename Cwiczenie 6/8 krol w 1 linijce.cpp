#include <iostream>
#include <cmath>
#include <string>

const int N = 8;
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

int king(int t[N][N],int l,int kol)
{
    cout<<"jsetem w "<<l<<" kolumna "<<kol<<endl;
    return (kol<0 or kol>7) ? 9999 : (l==7)? t[l][kol] : t[l][kol]+min(king(t,l+1,kol),min(king(t,l+1,kol+1),king(t,l+1,kol-1)));

}

int znajdz(int t[N][N])
{

    return king(t,0,3);
}
int main()
{
    int t[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            t[i][j]=9;

    t[0][3]=1;
    t[1][3]=1;
    t[2][4]=1;
        t[3][5]=1;
        t[4][6]=8;
        t[5][5]=1;
            t[6][4]=1;
                t[7][4]=1;
    cout<<znajdz(t);


}
