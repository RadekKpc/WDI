#include <iostream>
#include <cmath>
const int N = 8;
using namespace std;
int czy_pierwsza(int i)
{
    for(int j=2;j<=sqrt(i);j++)
        if(i%j==0)return false;

    return true;
}

int ilosc_dzielnikow_pierwszych(int n){
    int r=0;

    if(n==1)return r;

    for(int i =2;i<=n;i++)
        if(czy_pierwsza(i) && n%i==0)r++;

    return r;
}
bool mozliwe(int t[N][N],int w,int k,int i,int & w2,int & k2)
{
    int dx[8]={1,2,2,1,-1,-2,-2,-1};
    int dy[8]={-2,-1,1,2,2,1,-1,-2};
    w2 = w +dx[i];
    k2 = k+dy[i];

    return (w2>=0 & w2<N & k2>=0 & k2<N & t[w2][k2]==0);
}
void skoczek(int t[N][N],int n,int w,int k,bool & stop)
{
     t[w][k]=n+1;

    cout<<n<<endl;
    int w1 =0;
    int k1 =0;

    if(n==N*N){
            stop = false;
        for(int i=0;i<N;i++){
        cout<<endl;
        for(int j=0;j<N;j++)
            cout<<t[i][j]<<" ";
        }
    }
    else
        for(int i=0;i<8 & stop;i++){
                cout<<"skok"<<i<<" "<< n<<endl;
        if(mozliwe(t,w,k,i,w1,k1))
           skoczek(t,n+1,w1,k1,stop);
        }



}



int main()
{
    int t[N][N];
    bool stop =true;
    for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
            t[i][j]=0;

    skoczek(t,0,4,0,stop);

    return 0;
}
