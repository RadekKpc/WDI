#include <iostream>

using namespace std;
const int MAX = 10;

int main()
{
    int t[MAX][MAX];
    int ile = MAX;
    int licznik =0;
    int wiersz=0;
    int kolumna =-1;
    int kierunek =1;
    int kiedy=1;

    while(licznik<MAX*MAX)
    {

            for(int i=0;i<ile;i++){
            switch(kierunek%4){
        case 1: kolumna++; licznik++; break;
        case 2: wiersz++; licznik++; break;
        case 3: kolumna--; licznik++; break;
        case 0: wiersz--; licznik++; break;
            }
            t[wiersz][kolumna]=licznik;

        }
        kierunek++;
        kiedy++;
        if(kiedy%2==0)ile--;

    }

}
