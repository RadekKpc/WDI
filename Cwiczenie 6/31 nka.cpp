#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 6;
using namespace std;

int suma(int t[N],int n,int s,int l,int i,int su)
    {
        cout<<l<<endl;

        if(l==N)
            if(i==n)
                if(su==s){
                    cout<<"zwaracam 1"<<endl;
                return 1;
                }
                else
                    return 0;
            else
                return 0;


        return suma(t,n,s,l+1,i+1,su + t[l])+ suma(t,n,s,l+1,i,su);

    }

int nka(int t[N],int n,int s)
{
    return suma(t,n,s,0,0,0);
}

int main()
{
    int t[N] = {1,7,3,5,11,2};
    int n=3;
    int s=10;

    cout<<nka(t,n,s);
    return 0;
}
