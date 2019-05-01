#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int length=0;

    for(int a=n;a%10>=1;length++)
        {a/=10;}
    cout<<length;

    int cyfra[length];
    int rzad[length];

    for(int i=0;i<length;i++){
        cyfra[i]=n%pow(10,i+1)-n%pow(10,i);
        rzad[i]=pow(10,i);
    }


}


