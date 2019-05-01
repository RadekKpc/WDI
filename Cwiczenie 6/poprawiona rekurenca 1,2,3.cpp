#include <iostream>
#include <cmath>
const int N = 5;
using namespace std;

bool waga(int t[N],int i,int cel,bool b,bool p[])
{
    if(i>0)p[i-1]=b;
    cout << "jestem w "<<i << " cel"<<cel<<endl;
    if(cel==0){ for(int j=0;j<N;j++)if(p[j])cout<<" "<<t[j];return true;}
    if(i==N)return false;

    return(waga(t,i+1,cel-t[i],true,p)||waga(t,i+1,cel,false,p));



}

int main()
{
    int t[N]={1,3,4,5,3};
    int okreslona_masa = 15;
    bool p[N]={false,false,false,false,false};
    if(waga(t,0,okreslona_masa,false,p))cout<<"jest";


    return 0;
}
