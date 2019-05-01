#include <iostream>

using namespace std;
const int MAX = 5;

void wypisz(int t[MAX][MAX],int kolumna,int wiersz)
{
            cout<<"wiersz:"<<wiersz;
        cout<<"kolumna:"<<kolumna<<endl;
                for(int i =0;i<MAX;i++){
            cout<<endl;
        for(int k=0;k<MAX;k++)
            cout<<t[i][k]<<" "<<endl;
    }
}
bool czy_same_niepatrzyse(int l)
{

    for(int i=l;i>0;i/=10)
        if((i%10)%2==0)return false;
    return true;
}
int main()
{
    int t[MAX][MAX];
    int ile = MAX;
    int licznik =0;
    int wiersz=0;
    int kolumna =-1;

    while(licznik<MAX*MAX)
    {
        for(int i=0;i<ile;i++){
            kolumna++;
            t[wiersz][kolumna]=licznik;      //prawo
            licznik++;

        }
        ile--;

        for(int i=0;i<ile;i++){
            wiersz++;
            t[wiersz][kolumna]=licznik; //dó³
            licznik++;
        }



        for(int i=0;i<ile;i++){
            kolumna--;
            t[wiersz][kolumna]=licznik;      //lewo
            licznik++;

        }

        ile--;

        for(int i=0;i<ile;i++){
            wiersz--;
            t[wiersz][kolumna]=licznik;   //góra
            licznik++;

        }

    }
 int s=2;
    for(int i =0;i<MAX;i++){
        cout<<"----";
        for(int k=0;k<MAX;k++){
            // cin >> t[i][k] ;
           cin>> t[i][k];

        }
    }

    //ZADANIE 3



    bool flaga=false;;

    for(int i=0;i<MAX&!flaga;i++){
            flaga=true;
        for(int k=0;k<MAX;k++){
            if(czy_same_niepatrzyse(t[i][k]))flaga=false;
        }

    }

        if(flaga)cout<<"tak";
        else cout<<"nie";
}
