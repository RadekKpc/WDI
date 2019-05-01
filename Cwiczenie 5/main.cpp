#include <iostream>
#include <cmath>
using namespace std;

struct hetman{
    int w;
    int k;
};
struct dane{
    hetman t[100];
    int N;
};

bool czy_szachuja(dane & d)
{
    int t[100][100];

    for(int k=0;k<d.N;k++){
    for(int i=0;i<100;i++)
        for(int j=0;j<100;j++)
            t[i][j]=0;
    for(int i = 0;i<100;i++)
    {
        t[d.t[k].w][i]=1;
        t[i][d.t[k].k]=1;
    }
    for(int i=1;d.t[k].w+i<100&d.t[k].k+i<100;i++)
    t[d.t[k].w + i][d.t[k].k + i]=1;
    for(int i=1;d.t[k].w-i>=0&d.t[k].k-i>=0;i++)
    t[d.t[k].w - i][d.t[k].k - i]=1;
    for(int i=1;d.t[k].w+i<100&d.t[k].k-i>=0;i++)
    t[d.t[k].w + i][d.t[k].k - i]=1;
    for(int i=1;d.t[k].w+i>=0&d.t[k].k+i<100;i++)
    t[d.t[k].w - i][d.t[k].k + i]=1;

        for(int i=0;i<100;i++){cout<<endl;
        for(int j=0;j<100;j++)
            cout<<t[i][j]<<" ";

        }

    for(int p=k+1;p<d.N;p++){
            cout<<"sprawdzam"<<d.t[p].w<<d.t[p].k<<endl;
        if(t[d.t[p].w][d.t[p].k]==1)return true;

    }
    }

    return false;

}

int main(){

    dane d;
    d.N=2;
    d.t[0].k=1;
    d.t[0].w=1;
    d.t[1].k=61;
    d.t[1].w=60;

    if(czy_szachuja(d))cout<<"tak";
    else cout<<"nie";
}
