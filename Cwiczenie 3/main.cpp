#include <iostream>
#include <cmath>
using namespace std;

const int n=1000;

int main()
{
    int e[n+1];
    int x[n+1];
    for(int i =0;i<n+1;i++)
        {
        e[i]=0;
        x[i]=0;
        }

        x[0]=1;

        int k=1;
        bool b=true;

        while(b){
            int p =0;
            for(int i=n;i>=0;i--)
            {
                p=e[i]+x[i]+p;
                e[i]=p%10;
                p/=10;
            }
            int r=0; b=false;
            for(int i=0;i<=n;i++)
            {
                r=r*10+x[i];
                x[i]=r/k;
                if(x[i]>0)b=true;
                r=r%k;
            }
            k++;
        }
        for(int i=0;i<n+1;i++)
            cout<<e[i];



}
