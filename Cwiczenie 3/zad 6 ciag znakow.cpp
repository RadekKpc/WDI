#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int * tab;
    int rozmiar;
    cout << "Podaj rozmiar :";
    cin >> rozmiar;
    tab = new int[rozmiar+1];

    int i=-1;
    do
    {
        i++;
        cin>>tab[i];

    }while(tab[i]!=0);

                for(int p =0;p<rozmiar;p++)
                    cout<< tab[p] << " ";


    for(int k =0; k<rozmiar; k++)
    {



        for(int j =k+1 ;j<rozmiar; j++)
        {
            cout<<endl;
            if(tab[k]>tab[j])
                swap(tab[k], tab[j]);

                for(int p =0;p<rozmiar;p++)
                    cout<< tab[p] << " ";
        }
    }

        cout<< " to:" << tab[9];
        delete[]tab;

}
