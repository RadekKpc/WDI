#include <iostream>

using namespace std;

int main(){

    int a =1;
    int b =2;
    int c;
    int suma;

    while(a<1000000)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
    }


}
