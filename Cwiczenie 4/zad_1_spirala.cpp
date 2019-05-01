#include <iostream>

using namespace std;
const int MAX = 10;

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

    for(int i =0;i<MAX;i++){
            cout<<endl;
        for(int k=0;k<MAX;k++)
            cout<<t[i][k]<<" ";
    }

}
