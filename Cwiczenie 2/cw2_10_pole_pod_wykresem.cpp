#include <iostream>
#include <cmath>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main()
{
    int k;
    cin>>k;

    int eps = 100000;
    double dx = (double)(k-1)/eps;
    double fx[eps];
    double suma=0;

    for(int i=0;i<eps;i++)
        fx[i]=1/(dx*(i+1));
    for(int i =0;i<eps;i++)
        suma+=fx[i];

    cout<<dx*suma;


}


