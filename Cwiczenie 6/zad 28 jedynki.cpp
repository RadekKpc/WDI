#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 6;
using namespace std;

bool podzial(int t[N],int l,int s1,int s2,int s3)
    {
        return (l==N) ? (s1==s2 & s2==s3) : podzial(t,l+1,s1+t[l],s2,s3)||podzial(t,l+1,s1,s2+t[l],s3)||podzial(t,l+1,s1,s2,s3+t[l]);
    }

int main()
{
    int t[N] = {5,7,15};

    int c =0;
    for(int i=0;i<N;i++){
        int c =0;
        for(int j=t[i];j>0;j/=2)
          c+=j%2;
        t[i]=c;
    }



    if(podzial(t,0,0,0,0))cout<<"mozna";
    return 0;
}
