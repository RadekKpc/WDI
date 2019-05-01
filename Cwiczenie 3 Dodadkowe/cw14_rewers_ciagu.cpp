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
    int t[MAX];//={1,2,3,4,5,6,7,8,9,10,9,8,7,6,5};
    int t2[MAX];
    int dlugosc=0,tmp=0;
   // for(int i=0;i<MAX;i++)
     //   t2[i]=t[MAX-i-1];

   // for(int i=0;i<MAX;i++)
    //    if(t[i]==t2[i])dlugosc++;
    //    else{
    //       if
    //   }



      for(int i=0;i<MAX;i++){
       t[i]=rand()%999 + 100;
       cout<<t[i]<<endl;
    }


    cout<<dlugosc_ciagu_i_rewersu(t);

}
