#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int MAX = 10;

void wypisz(int t2[MAX][MAX])
{
    for(int i=0;i<MAX;i++){
            cout<<endl;
        for(int j=0;j<MAX;j++)
            cout<<t2[i][j]<<" ";
    }

}
void maks_iloraz(int t[MAX][MAX] ,int & w, int & k)
{
    int sk,sw;
    int a=0 , b=0;
    int mw=3200000 ,mk=0,mkn=0,mwn=-32000;

    for(int i=0;i<MAX;i++){
            sk=sw=0;
        for(int j=0;j<MAX;j++)
        {
            sk+=t[j][i];
            sw+=t[i][j];

        }
        cout<<"sk"<<sk<<" sw"<<sw<<endl;
        if(sw<mw&sw>=0){mw=sw;w=i;}
        if(sk>mk&sk>0){mk=sk;k=i;}
        if(sw<mwn&sw<0){mwn=sw;a=i;}
        if(sk>mkn&sk<=0){mkn=sk;b=i;}
    cout<<k<<" "<<w<<endl;
    }
    if(mkn/mwn>mk/mw){w=a;k=b;}

    cout<<k<<" "<<w<<endl;
}
int main(){
    srand (time(NULL));

    int t[MAX][MAX];
    int w=0;
    int k=0;
        for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
        t[i][j]= -6 +i;
        wypisz(t);
    maks_iloraz(t,w,k);
    cout<<endl<<w<<" "<<k;


}

