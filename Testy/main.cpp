
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
typedef long long ll;
typedef long double ld;

int main(){
	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
     fstream plik;
     plik.open("plik2.txt", ios::out | ios::app);
	plik<<1000000000<<endl;
	for(int i = 1;i<2000;i++){
		plik<<1<<endl;
	}
    plik.close();
	return 0;
}
