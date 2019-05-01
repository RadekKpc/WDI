#include <iostream>
#include <cmath>
#include <string>

const int N = 6;
using namespace std;
czy_pierwsza(int n){

    for(int i=2;i<sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
bool podzial(int t[],int l,int kont,int indeks)
{
    if(l==N)return czy_pierwsza(kont);
    if(czy_pierwsza(kont))return podzial(t,l+1,0,0)||podzial(t,l+1,kont+pow(2,indeks)*t[l],indeks +1);
    else return podzial(t,l+1,kont+pow(2,indeks)*t[l],indeks);
}

int main()
{
    int t[N]={110100};
    if(podzial(t,0,0,0))cout<<"tak";
    return 0;
}
