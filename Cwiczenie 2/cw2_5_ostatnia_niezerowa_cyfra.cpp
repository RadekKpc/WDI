#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int x;

    for(int i =1;i<=n;i++)
    {   x*=i;
        while(x%10==0)
            x/=10;

        x%=10;
    }
    cout <<x%10 <<endl;
    }


