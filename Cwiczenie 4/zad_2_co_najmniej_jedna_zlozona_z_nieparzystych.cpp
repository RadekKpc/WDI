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
 int s=1;
    for(int i =0;i<MAX;i++){
            cout<<endl;
            s++;
        for(int k=0;k<MAX;k++){
             // t[i][k] = s;
            cout<<t[i][k]<<" ";
        }
    }

    //ZADANIE 2


    bool flaga = true;
    bool flaga2 = true;
    bool flaga3 = true;

    for(int i=0;i<MAX&flaga;i++){
            flaga&=flaga2;
            flaga2=false;
        for(int k=0;k<MAX&!flaga2;k++){
            flaga2=true;
            for(int l = t[i][k];l>0;l/=10)
                if((l%10)%2==0)flaga2=false;
        }

    }

        if(flaga)cout<<"tak";
        else cout<<"nie";
}
