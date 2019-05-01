#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a = floor(sqrt(n)+1);
    int b = floor(sqrt(n)-1);

    while(n%a!=0)
        a++;
    while(n%b!=0)
        b++;

    cout<<a<<" "<<b;

}


