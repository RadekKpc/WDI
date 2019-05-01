#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
const int MAX = 1000;

bool czy_pierwsza(int a){

        for(int i=2;i<=sqrt(a);i++)
            if(a%i==0)
                return false;
        return true;
    }
bool czy_mozna(int t[],int indeks){



        bool flaga = false;
        if(indeks==MAX-1){

            return true;
        }
        if(indeks>MAX-1){

            return false;
        }

        for(int i = 2;i<=t[indeks] & !flaga ;i++){

            if(t[indeks]%i==0 & czy_pierwsza(i)){

               flaga = czy_mozna(t,indeks+i);
            }
        }

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
int dlugosc_arytm(int t[],int znak)
    {   cout<<"Badam"<<znak<<endl;
        int r=0;
        int dlugosc=2;
        int tmp =2;
        for(int i=0;i<MAX-2;i++)
        {   cout<<"RESZTA: " << (t[i+1]-t[i]) <<endl;
            r=(t[i+1]-t[i]);
            if(r==t[i+2]-t[i+1]&& r*znak>0){dlugosc++; cout<<"zwiekszam dlugosc"<<endl;}
            else
            if(dlugosc>tmp){
                tmp=dlugosc;
                dlugosc=2;
            }
        }
        return dlugosc>tmp?dlugosc : tmp;
    }

int main()
{
    srand( time( NULL ) );
    int t[MAX];//={1,2,3,4,5,6,7,8,9,10,9,8,7,6,5};

    for(int i=0;i<MAX;i++){
       t[i]=(rand()%49)*2 +1;
       cout<<t[i]<<endl;
    }

    cout<<dlugosc_arytm(t,1)<<-dlugosc_arytm(t,-1);

}
