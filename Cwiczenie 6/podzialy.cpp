#include <iostream>
#include <cmath>
#include <string>

const int N = 5;
using namespace std;

char na_string(int i)
{
    if(i==1)return '1';
    if(i==2)return '2';
    if(i==3)return '3';
    if(i==4)return '4';
    if(i==5)return '5';
    if(i==6)return '6';
}
void podzial(int n,int m,string r)
{
    if(n==0)cout<<r<<endl;
    for(int i=m;i<=n;i++)
        podzial(n-i,i,r+'+'+na_string(i));
}

int main()
{
    podzial(6,1,"");
    return 0;
}
