
#include <iostream>

using namespace std;

int main()
{
 char T[16]={'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};
 int a;
 cin>>a;
 bool flaga=true;
 char c;
for(;a<100;a++){
 for(int i=2;i<17;i++){
        flaga = true;
    for(int j=a;j>0;j/=i)
        {
            c=T[j%i];
            if(c!='2'&c!='3'&c!='5'&c!='7'&c!='b'&c!='d'){flaga=false; break;}

        }
        if(flaga)break;
    }

    if(flaga)cout<<a<<" tak"<<endl;
    else cout<<a<<" nie"<<endl;
}
}

