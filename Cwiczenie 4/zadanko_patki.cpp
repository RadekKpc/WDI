#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;


int main(){

    double a,b,s=0,l=0;
    cin>>a>>b;

    cout<<a<<" "<<b<<endl;

    for(int i =a;i<=b;i++)
        s+=i;

    cout<<s<<endl;
    s=0;

    while(l<=b){
        if(l>0)s+=l;
        l++;
    }

    cout<<s<<endl;
    s=l=0;

    do{
       if(l>0)s+=l;
        l++;
    }while(l<=b);

    cout<<s<<endl;
    s=l=0;

    if(a>b)cout<<"max:"<<a<<" min"<<b<<endl;
    else cout<<"max:"<<b<<" min"<<a<<endl;

    cout<<"max:"<<max(a,b)<<" min"<<min(a,b)<<endl;

    cout<<"iloraz:"<<a/b;

    return 0;
}

