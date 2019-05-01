#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int a;
    int b;
    int n;

    cin>>a>>b>>n;

    for(int i =1;i<=n;i++)
    {
        if(a%b!=0)
            a=(a%b)*10;
        cout<<a/b;
    }

}


