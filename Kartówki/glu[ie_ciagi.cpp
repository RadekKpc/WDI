#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int MAX = 3000;

int main(){

    double k;
    cin>>k;

    double ra=1000,rb=10000;
    double a=1;
    double b=2;
    double b2=3;
    double a2=2;
    int licznik =1;
    int licznik2=1;
    while(abs(b-k)>abs(b2-k)||abs(a-k)>abs(a2-k))
    {
        if(abs(a-k)>abs(a2-k)){ra=abs(a2-k); licznik++; cout<<" ra:"<<ra;}
        if(abs(b-k)>abs(b2-k)){rb=abs(b2-k); licznik2++;cout<<" rb:"<<rb;}
        swap(a2,a);
        swap(b2,b);
        b2=b+a;
        a2=a+b2/3;
        cout<<" a"<<licznik+1<<": "<<a2<<"  b"<<licznik2+1<<": "<<b2<<" ";

    }
    cout<<endl;
    if(ra>rb)cout<<"b"<<licznik2;
    if(ra<rb)cout<<"a"<<licznik;
    if(ra==rb)licznik>licznik2?cout<<"b"<<licznik2 : cout<<"a"<<licznik;




}

