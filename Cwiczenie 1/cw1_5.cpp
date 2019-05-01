#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int pierwsza;
    int a=3;
    pierwsza = 3;
    if(pierwsza%2>0){
    while(a<=sqrt(pierwsza))
        {
            if(pierwsza%a==0)
            {
            cout<<"N";
            return 0;
            }
            a+=2;
        }
        cout<<"T";
    }
    else
        cout<<"N";
}

/*    bool czypierwsza[1000000];
    for(int i =0; i<1000000;i++)
        czypierwsza[i]=true;

    czypierwsza[0]= false;
    czypierwsza[1]=false;

    for(int i =2;i<1000000;i++)
        if(czypierwsza[i]==true)
            for(int a =2*i;a<1000000;a+=i)
                czypierwsza[a]=false;

*/

