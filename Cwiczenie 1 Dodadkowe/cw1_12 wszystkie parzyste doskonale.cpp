#include <iostream>

using namespace std;

int main()
{
    int a =7;
    int s=0;

    for(int i=1,i<1000000,i++)
    {
        for(int j=1,j<=i/2,i++)
        {
            if(i%j==0)
                s+=j;
        }
        cout<<s<<" "<<i<<endl;
        s=0;
    }
}
