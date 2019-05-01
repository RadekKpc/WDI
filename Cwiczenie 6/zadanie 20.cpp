#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>
#include <windows.h>

const int N = 8;
using namespace std;

void SetColor(string number){
    int color = 0;
    HANDLE hOut;

    switch (number[0]) {

    case '0':

        color += 0x40;
        break;

    case '1':

        color += 0x20;
        break;

    case '2':

        color += 0x10;
        break;

    case '3':

        color += 0x60;
        break;

    case '4':

        color += 0x50;
        break;

    case '5':

        color += 0x30;
        break;

    case '6':

        color += 0x70;
        break;

    case '7':

        color += 0xC0;
        break;

    case '8':

        color += 0xA0;
        break;

    case '9':

        color += 0x90;
        break;

    case 'A':

        color += 0xE0;
        break;

    case 'B':

        color += 0xD0;
        break;

    case 'C':

        color += 0xB0;
        break;

    case 'D':

        color += 0xF0;
        break;

    }

    switch (number[1]) {

    case '0':

        color += 0x4;
        break;

    case '1':

        color += 0x2;
        break;

    case '2':

        color += 0x1;
        break;

    case '3':

        color += 0x6;
        break;

    case '4':

        color += 0x5;
        break;

    case '5':

        color += 0x3;
        break;

    case '6':

        color += 0x7;
        break;

    case '7':

        color += 0xC;
        break;

    case '8':

        color += 0xA;
        break;

    case '9':

        color += 0x9;
        break;

    case 'A':

        color += 0xE;
        break;

    case 'B':

        color += 0xD;
        break;

    case 'C':

        color += 0xB;
        break;

    case 'D':

        color += 0xF;
        break;

    }

    SetConsoleTextAttribute(hOut, color);

}

czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
string intToStr(int n)
{
     string tmp, ret;
     if(n < 0) {
      ret = "-";
      n = -n;
     }
        for(int i=n;i>0;i/=10)tmp+=i%10 +48;

     for(int i = tmp.size()-1; i >= 0; i--)
      {ret += tmp[i];
      }
     return ret;
}

void czy_mozna(int t[N][N],int s,int zadana_suma,int l,bool k[],bool & stop,int w[])
{
  //  cout<<l<<" "<<" K "<<s<<endl;
    if(l==N-1){if(s==zadana_suma){stop = false;
    for(int i=0;i<N;i++)cout<<" "<<w[i]<<" ";
     return;}else return;};
    for(int i=0; i<N & stop;i++){
        if(k[i])
        {
          k[i]=false;
          w[l]=i;
          czy_mozna(t,s+t[l][i],zadana_suma,l +1,k,stop,w);
          k[i]=true;


        }
        w[l]=-1;
        czy_mozna(t,s,zadana_suma,l + 1, k ,stop,w);
    }
}


int main()
{   SetColor("5");
     int zadana_suma = 10;
     int t[N][N];
     for(int i=0;i<N;i++)
        for(int j=0;j<N;j++)
        t[i][j]=11;

     t[4][0]=5;
     t[2][2]=3;
     t[3][3]=2;

     int wiersz[N];
     bool kolumny[N];

     for(int i=0;i<N;i++){kolumny[i]=true;wiersz[i]=0;}
    bool stop =true;
    czy_mozna(t,0,zadana_suma,0,kolumny,stop,wiersz);
     if(!stop)cout<<"tak"<<endl;
  return 0;
}
