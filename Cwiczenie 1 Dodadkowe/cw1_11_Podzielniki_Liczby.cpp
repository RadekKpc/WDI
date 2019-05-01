#include <iostream>

using namespace std;

int main()
{
    int a =7;
    int i =1;
    while(i<=a/2)
    {
        if(a%i==0)
            cout<<i<<endl;
        i++;
    }
    cout<<a;
}
