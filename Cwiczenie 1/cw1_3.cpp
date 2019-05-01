#include <iostream>

using namespace std;

int main()
{
    int liczba;
    cin>>liczba;
    int a=1;
    int b=1;

    while(a<liczba&b<liczba)
    {
        if(a*b==liczba)
        {
            cout<<"T";
            return 0;
        }
        a+=b;
        if(a*b==liczba)
        {
            cout<<"T";
            return 0;
        }
        b+=a;
    }
    cout<<"N";

}
