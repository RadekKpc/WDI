#include <iostream>

using namespace std;

int main()
{
    int liczba;
    int licznik =1;
   cin >> liczba;
    cout << liczba <<endl;
   for(int a =1;liczba>0;a+=2)
        {   liczba-=a;
            if(liczba==0)
                cout << "lczba to " <<licznik;

            licznik++;
        }



}
