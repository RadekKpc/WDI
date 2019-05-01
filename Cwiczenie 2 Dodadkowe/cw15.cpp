#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int ostatnia = n%10;
    for(int i=n/10;i>0;i/=10)
        if(i%10==ostatnia)
            cout<<"N";
}
