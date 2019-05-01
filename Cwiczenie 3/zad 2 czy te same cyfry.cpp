#include <iostream>

using namespace std;

int main()
{
    int cyfry[10]={0,0,0,0,0,0,0,0,0,0};
    int a,b;
    cin>>a>>b;

    while(a>0) // Zak³¹dam ze maja jednakow¹ d³ugosc
    {
        cyfry[a%10]++;
        cyfry[b%10]--;

        a/=10;
        b/=10;
    }

    for(int i=0;i<10;i++)
        if(cyfry[i]!=0)
    {
        cout<<"N";
        return 0;
    }

    cout << "T";
    return 0;

}
