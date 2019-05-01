#include <iostream>

using namespace std;

int main()
{
    int a,system;
    cin>>a;
    cin>>system;
    string s="";
    char T[16]= {'0','1','2','3','4','5','6','7','8','9','a','b','c','d','e','f'};

    while(a>0)
    {
        s=T[a%system] + s;
        a/=system;
    }



    cout<<s;

    return 0;
}
