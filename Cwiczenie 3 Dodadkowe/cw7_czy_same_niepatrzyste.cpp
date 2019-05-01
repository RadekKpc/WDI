#include <iostream>

using namespace std;
const int MAX = 1000;

bool czy_same_nieparzyste(int a)
{
    for(int i=a;i>0;i/=10)
        if((i%10)%2==0)
            return false;
    return true;
}
bool czy_chocaiz_jedna_nieparzysta(a)
{
    for(int i=a;i>0;i/=10)
        if((i%10)%2!=0)
            return true;
    return false;
}
int main()
{
    int t[MAX];

    for(int i =0;i<MAX;i++)
        t[i]=i+1;

    for(int i=0;i<MAX;i++)
    {
        if(czy_same_nieparzyste(t[i]))
            cout<<t[i]<<endl;
    }
        for(int i=0;i<MAX;i++)
    {
        if(czy_chocaiz_jedna_nieparzysta(t[i]))
            cout<<t[i]<<endl;
    }
}
