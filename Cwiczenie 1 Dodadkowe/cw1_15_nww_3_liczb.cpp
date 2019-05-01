#include <iostream>

using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
        swap(a,b);
    if(a>c)
        swap(a,c);
    if(b>c)
        swap(b,c);

    int i=2;
    while(c*i%b!=0 || c*i%a!=0)
        i++;

    cout << c*i;


}

