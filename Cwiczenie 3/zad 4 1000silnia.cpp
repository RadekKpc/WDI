#include <iostream>
#include <cmath>
using namespace std;

int main(){
	const int n = 2570;

    int tab[n] = {0} , silnia;
    cin >> silnia;

        tab[n-1]=1;

    for(int p=2; p<=silnia; p++){
        for(int i =1;i<n;i++)
            tab[n-i]*=p;

        for(int i =1;i<n-1;i++)
            {
                tab[n-i -1]+=tab[n-i]/10;
                tab[n-i]%=10;
            }

    }

    int i=0;
    while(tab[i]==0)i++;
    for(i;i<n;i++)
        cout << tab[i];
}
