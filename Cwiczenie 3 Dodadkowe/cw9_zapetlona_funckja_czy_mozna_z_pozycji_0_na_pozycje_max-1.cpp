#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
const int MAX = 100;

bool czy_pierwsza(int a){

        for(int i=2;i<=sqrt(a);i++)
            if(a%i==0)
                return false;
        return true;
    }
bool czy_mozna(int t[],int indeks){

        cout<<"Badam :" <<t[indeks]<<" indeks:"<<indeks<<endl;

        bool flaga = false;
        if(indeks==MAX-1){
                cout<<"indeks == MAX-1"<<endl;
            return true;
        }
        if(indeks>MAX-1){
            cout<<"indeks > MAX-1"<<endl;
            return false;
        }

        for(int i = 2;i<=t[indeks] & !flaga ;i++){
            cout<<"Wszedlem w fora:" << indeks <<endl;
            if(t[indeks]%i==0 & czy_pierwsza(i)){
                cout<<"element:"<<t[indeks]<<" modulo"<<i<<" jest peirwsza"<<endl;
               flaga = czy_mozna(t,indeks+i);
            }
        }
                cout<<"zwracam flage "<<indeks<<endl;
               return flaga;

    }
bool czy_same_nieparzyste(int a){
    for(int i=a;i>0;i/=10)
        if((i%10)%2==0)
            return false;
    return true;
}
bool czy_chociaz_jedna_nieparzysta(int a){
    for(int i=a;i>0;i/=10)
        if((i%10)%2!=0)
            return true;
    return false;
}


int main()
{
    srand( time( NULL ) );
    int t[MAX];//={,4,3,6,5,2,5,4,7,8};

    for(int i=0;i<MAX;i++){
   //     cin>>t[i];
        t[i]=rand()%10 +2 ;
        cout<<t[i]<<endl;
    }

    cout<<"czy mozna :" << czy_mozna(t,0);
    cout<< true;
}
