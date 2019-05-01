#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 2;
using namespace std;
czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}

void wyznacznik_macierzy(int tab[N][N],bool tab2[N][N],int w,int wyz, int & res,int kol)
    {
        if(wyz==1)
        {
            for(int i=0;i<N;i++)
                for(int j=0;j<N;j++)
                    if(tab2[i][j])
                    {
                        res+=(pow(-1,w+kol)*tab[i][j]);
                    }
        }
        for(int i=0;i<N;i++)
        {
            if(tab2[w][i])
            for(int j=0;j<N;j++){
                tab2[w][j]=false;
                tab2[j][i]=false;
            }
            wyznacznik_macierzy(tab,tab2,w+1,wyz-1,res*tab[w][i],i)
            for(int j=0;j<N;j++){
                tab2[w][j]=true;
                tab2[j][i]=true;
            }
        }

    }

int
int main()
{
    int w  =1;
    int tab[N][N];
    tab[0][0]=1;
    tab[0][1]=4;
    tab[1][0]=2;
    tab[1][1]=-3;
    bool tab2[N][N];
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        tab2[i][j]=true;
    wyznacznik_macierzy(tab,tab2,0,N,w,0);
    cout<<endl<<<w;
}
