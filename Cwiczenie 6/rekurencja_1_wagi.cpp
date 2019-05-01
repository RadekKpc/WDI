#include <iostream>
#include <cmath>
const int N = 4;
using namespace std;

bool odwarzenie_masy(int t[N],int m,int n,int l)
{
    cout<<"rekurencja nr :"<<l<<endl;
    if(l==81){cout<<"1_if"<<l<<endl;
        return false;
    }
    else
        if(odwarzenie_masy(t,m,n,l+1)){cout<<"znalazlem"<<l<<endl;return true;}

        int suma =0;
        int i=0;
        int druga_szalka =m;
        for(int p=l;p>0;p/=3)
        {
            if(p%3==1)suma+=t[i];
            if(p%3==2)druga_szalka+=t[i];
            i++;
        }
        cout<<"suma"<<l<<":"<<suma<<"druga szalka:"<<druga_szalka<<endl;
        if(suma==druga_szalka)return true;
        return false;

}

int main()
{
    int t[N]={1,3,4,5};
    int okreslona_masa = 12;

    if(odwarzenie_masy(t,okreslona_masa,N,1))cout<<"tak";
    else cout<<"nie";

    return 0;
}
