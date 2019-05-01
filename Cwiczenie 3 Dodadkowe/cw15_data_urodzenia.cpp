#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;
const int MAX = 40;

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
int dlugosc_arytm(int t[],int znak){
       cout<<"Badam"<<znak<<endl;
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
int dlugosc_ciagu_i_rewersu(int t[]){
    int dlugosc=0,tmp=0,l;

    for(int i=0;i<MAX;i++){
        for(int j =MAX-1;j>=0;j--)
        {
            if(t[i]==t[j])
            {      l=j;
                   dlugosc =0;
                for(int k = i;t[k]==t[l]&&l>=0&&k<MAX;l--){
                    k++;
                    dlugosc++;
                }
            }
            if(dlugosc>=tmp) tmp = dlugosc;

        }
    }

        return dlugosc>tmp?dlugosc : tmp;
}

int main()
{
    srand( time( NULL ) );

    int dzien[MAX];
    int miesiac[MAX];
    int rok[MAX];
    int flaga = false;
    int prawdopodobienstwo=0;

    for(int j=0;j<1000;j++){
         flaga = false;

    for(int i=0;i<MAX;i++){
        miesiac[i]=rand()%12 + 1;
        if(miesiac[i]==2) rok[i]=rand()%4 +1;
        }

      for(int i=0;i<MAX;i++){
       if(miesiac[i]==1||miesiac[i]==3||miesiac[i]==5||miesiac[i]==6||miesiac[i]==8||miesiac[i]==10||miesiac[i]==12)dzien[i]=rand()%31 + 1;
        if(miesiac[i]==4||miesiac[i]==7||miesiac[i]==9||miesiac[i]==11)dzien[i]=rand()%30 + 1;
        if(miesiac[i]==2 && rok[i]%4==0)dzien[i]=rand()%29 + 1;
        else dzien[i]=rand()%28 + 1;
        }

        for(int k=0;k<MAX&!flaga;k++)
            for(int p=k+1;p<MAX&!flaga;p++)
                if(miesiac[k]==miesiac[p]&dzien[k]==dzien[p])
                    flaga = true;

        if(flaga)prawdopodobienstwo++;
    }

    cout<<prawdopodobienstwo<<"/1000";





}
