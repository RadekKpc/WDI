#include <iostream>

using namespace std;
const int MAX = 5;

void najwiekrzy_iloraz(int t[MAX][MAX],int & kolumna,int & wiersz)
{
    double suma_z_wiersza=0;
    double suma_z_kolumny=0;
    double iloraz=0;

    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
    {
        suma_z_wiersza=0;
        suma_z_kolumny=0;

        for(int k=0;k<MAX;k++)
            suma_z_wiersza+=t[i][k];
        for(int k=0;k<MAX;k++)
            suma_z_kolumny+=t[k][j];
        cout<<"suma z kolumny" << suma_z_kolumny<<endl<<"suma z wiersza:"<<suma_z_wiersza<<endl;
        cout<<"iloraz1"<<suma_z_kolumny/suma_z_wiersza<<endl;
        if(iloraz<suma_z_kolumny/suma_z_wiersza)
        {iloraz=suma_z_kolumny/suma_z_wiersza;
            wiersz=i;
            kolumna=j;
        }
        cout<<"iloraz:"<<iloraz<<"wiersz :"<<wiersz<<"kolumna :"<<kolumna<<endl;
    }
}

int main(){

    int t[MAX][MAX];
    int kolumna;
    int wiersz;
    for(int i=0;i<MAX;i++){
            cout<<endl;
        for(int k=0;k<MAX;k++){
            t[i][k]=k+i;
            cout<<t[i][k]<<" ";
        }
    }
    najwiekrzy_iloraz(t,kolumna,wiersz);
}
