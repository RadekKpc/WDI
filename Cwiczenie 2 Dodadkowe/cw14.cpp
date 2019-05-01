#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int liczba_cyfr=0;

    for(int i=n;i>0;liczba_cyfr++)
        i/=10;

    for(int i=n;i>0;i/=10)
        if(i%10==liczba_cyfr)
        cout<<"T";




}
