#include <cstdio.h>


using namespace std;

int main()
{
 char T[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'}
 int a,b;
 cin>>a>>b;
 bool flaga=true;
 int i;

 for(i=2;i<17&flaga;i++){
        flaga = false;
    for(int j=a;j>0;j/=i)
        for(int k=b;k>0;k/=i)
            if(T[j%i]==T[k%i])flaga=true;
    }

    if(i>16)cout<<"nie ma";
    else
        cout<<i;

}
