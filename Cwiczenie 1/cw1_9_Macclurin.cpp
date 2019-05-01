#include <iostream>
#include <cmath>


using namespace std;

double silnia(double x)
{
    double sil=1;
    if(x==1)
        return 1;
    else
    {
        for(int i =2;i<=x;i++)
            sil*=i;
            return sil;
    }
}
double cosinus(double x)
{
    double i=0;
    double wynik=1;
    while(i<16)
        {
            wynik-=(1/silnia(i+2))*pow(x,i+2);
            wynik+=(1/silnia(i+4))*pow(x,i+4);
            i+=4;
        }
    return wynik;
}

int main()
{
    double kat;
    cin>>kat;
    cout << cosinus((kat/360.0)*2.0*M_PI)<<endl;

}
