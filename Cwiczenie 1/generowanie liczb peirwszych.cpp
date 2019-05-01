#include <iostream>

using namespace std;

int main()
{
    bool czypierwsza[1000000];
    for(int i =0; i<1000000;i++)
        czypierwsza[i]=true;

    czypierwsza[0]= false;
    czypierwsza[1]=false;
    int liczba;
    cin >> liczba;



    for(int i =2;i<1000000;i++)
        if(czypierwsza[i]==true)
            for(int a =2*i;a<1000000;a+=i)
                czypierwsza[a]=false;


    for(int i =0;i<1000000;i++)
        if(czypierwsza[i])
            if(i==liczba)
                cout << "tak";

    for(int i=0;i<1000000;i++)
        if(czypierwsza[i])
            cout<<i<<endl;


}
