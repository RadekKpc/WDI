#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int N=100;
int main()
{
    srand(time(NULL));
    int sd=0,su=0;
    int md=0, mu=0;

    int t[N];
    for(int i=0;i<N;i++){
        t[i]=rand()%2 + 1;
        cout<<t[i]<<" ";}
        cout<<endl;
    for(int i=0;i<N-1;i++){
        t[i]=t[i]-t[i+1];
        cout<<t[i]<<" ";
    }
    cout<<endl;

    for(int i =0;i<N-1;i++)
    {
        su=0;sd=0;
        for(int k=i;t[k]==t[k+1];k++)
        {
            if(t[k]>0)sd++;
            if(t[k]<0)su++;
        }
        if(sd>md)md=sd;
        if(su>mu)mu=su;
    }
    md++;mu++;
    cout<<md<<" "<<mu;
}

