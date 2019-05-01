#include <iostream>

using namespace std;

int main()
{
    int s;
    int b;

    for(int i=1;i<1000000;i++)
    {
        s=0;
        b=0;
        for(int j=1;j<=i/2;j++)
        {
            if(i%j==0)
                s+=j;
        }
        for(int j=1;j<=s/2;j++)
        {
            if(s%j==0)
                b+=j;
        }

        if(b==i & i!=s & s<i)
            cout << s <<" " << i << endl;

    }
}
