#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int sn= sqrt(n);

    bool pierwsze[n+1];
    pierwsze[0]=false;
    pierwsze[1]=false;

    for(int i = 2;i<=n;i++)
        pierwsze[i]=true;

    for(int i = 2;i<=sn;i++)
        if(pierwsze[i])
            for(int a = 2*i;a<=n;a+=i)
                pierwsze[a]=false;

    for(int i = 2;i<=n;i++)
        if(pierwsze[i])
            cout<<i<<endl;


}
