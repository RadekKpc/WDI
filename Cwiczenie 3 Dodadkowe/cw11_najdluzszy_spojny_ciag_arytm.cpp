#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>

using namespace std;
const int MAX = 2000;

bool czy_same_nieparzyste(int a)
{
    for(int i=a;i>0;i/=10)
        if((i%10)%2==0)
            return false;
    return true;
}
bool czy_chociaz_jedna_nieparzysta(int a)
{
    for(int i=a;i>0;i/=10)
        if((i%10)%2!=0)
            return true;
    return false;
}
int main()
{
    srand( time( NULL ) );
    int t[MAX];
    int dlugosc=0;
    int tmp=0;
    int r;

    for(int i=0;i<MAX;i++){
//cin>>t[i];
        t[i]=rand()%1000 ;
        cout<<t[i]<<endl;
    }
        for(int i=0;i<MAX;i++){

        cout<<t[i+1]-t[i]<<endl;
    }


    for(int i=0;i<MAX-2;i++)
    {
        r=t[i+1]-t[i];
        if(r==t[i+2]-t[i+1])dlugosc++;
        else {
            if(dlugosc>tmp) tmp=dlugosc;
            dlugosc=0;
        }

    }


    cout<<"dlugosc "<<tmp+2;

}
