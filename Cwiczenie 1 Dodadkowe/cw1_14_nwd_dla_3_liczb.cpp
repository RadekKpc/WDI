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

        int i=a;

    while(i>1)
    {
        if(b%i==0)
            if(c%i==0)
            {
                cout<<i;
                return 0;
            }
        i--;
        while(a%i!=0)
        i--;

    }
        cout<<1;
}

