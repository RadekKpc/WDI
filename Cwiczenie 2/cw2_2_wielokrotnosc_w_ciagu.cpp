#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a;
    int b =3;
    int s=1;
    cin>>a;

    while(a>b)
    {
        b=s*s+s+1;
        if(a%b==0)
        {
            cout<<"T";
            return 0;
        }
        s++;
    }
    cout<<"N";


}
