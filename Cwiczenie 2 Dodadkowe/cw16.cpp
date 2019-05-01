#include <iostream>
#include <cmath>
using namespace std;

bool czy_pierwsza(int a)
    {
        for(int i=2;i<=sqrt(a);i++)
            if(a%i==0)
                return false;
        return true;
    }
int dlugosc(int a)
    {
        int i = 0;
        for(i;a>0;a/=10)
            i++;

        return i;
    }
void permutuj(int T[],int ix)
{

}

int main()
{
    int a,b;
    cin>>a>>b;
    int liczba =0;

    int tab_a[dlugosc(a)];
    int tab_b[dlugosc(b)];
    int tab_c[dlugosc(a)+dlugosc(b)];

    for(int i =0;i<dlugosc(a);i++)
        {tab_a[i]=a%10;
        a/=10;
        }

    for(int i =0;i<dlugosc(b);i++)
        {tab_b[i]=b%10;
        b/=10;
        }
    for(int i =0;i<dlugosc(a)+dlugosc(b);i++)
        tab_c[i]=i;


}

