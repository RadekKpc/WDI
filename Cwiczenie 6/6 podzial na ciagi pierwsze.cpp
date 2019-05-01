#include <iostream>
#include <cmath>
#include <string>

const int N = 6;
using namespace std;
czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
int potega(int a,int b){
    int c =1;
    if(b==0)
        return 1;
    if(b==1)
        return a;
    for(int i =1;i<=b;i++)
    {
        c*=a;
    }
    return c;
}
bin(int t[N],int indeks,int p){

    return t[indeks]*potega(2,p);

}
bool podzial(int t[],int l,int kont,int d)
{
    cout<<"jestem w " <<l<<"kontynuacja "<<kont<<endl;

    if(l==N)return czy_pierwsza(kont);
    return d<30? czy_pierwsza(kont) ? podzial(t,l+1,t[l],0)||podzial(t,l+1,kont<<1 | t[l],d+1):podzial(t,l+1,kont <<1 | t[l],d+1) : false;


}

int main()
{
    int t[N]={1,0,0,0,0,1};
     //int t[N]={1,1,0,1,0,0}; //
      //int t[N]={1,1,1,0,1,1};
    if(podzial(t,0,0,0))cout<<"tak";

}
