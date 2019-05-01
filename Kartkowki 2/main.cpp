#include <iostream>
#include <cmath>
using namespace std;
static const int N =8;

wieze(int p1[N],int p2[N],int s ,int l,int k1,int k2)
{
    return (l==N) ? (s==0 & k1==k2) :
            (N%2==0) ? wieze(p1,p2,s+p1[l],l+1,k1+1,k2)||wieze(p1,p2,s+p2[l],l+1,k1,k2+1) :
            (l==N/2 +1) ? wieze(p1,p2,s+p2[l],l+1,k1+1,k2+1) :
            wieze(p1,p2,s+p1[l],l+1,k1+1,k2)||wieze(p1,p2,s+p2[l],l+1,k1,k2+1);
}


int main()
{
    int t[N][N];

    for(int i=0;i<N;i++)
    {
        t[i][i]=2;
        t[i][N-i-1]=-2;
    }
   // t[2][2]=0;

    int p1[N],p2[N];

    for(int i=0;i<N;i++)
    {
        p1[i]=t[i][i];
        p2[i]=t[i][N-i-1];
        cout<< p1[i]<< " "<<p2[i]<<endl;
    }

    if(wieze(p1,p2,0,0,0,0))cout<<"mozna";

    return 0;
}
