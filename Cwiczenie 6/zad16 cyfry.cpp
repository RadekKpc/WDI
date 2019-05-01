#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 8;
using namespace std;
czy_pierwsza(int n){

    if(n==1 || n==0)return false;
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)return false;
    return true;
}
string intToStr(int n){
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
void ile(string a ,string b,string c, int & p,int l,int la,int lb){

    if(lb>b.length()||la>a.length())return;
    if(l==a.length()+b.length() && czy_pierwsza(atoi(c.c_str()))){p++; return;}
    ile(a,b,c+a[la],p,l+1,la+1,lb);
    ile(a,b,c+b[lb],p,l+1,la,lb+1);

}



int main()
{
int p=0;
  ile(intToStr(123),intToStr(75),"",p,0,0,0);
  cout<<p;
  return 0;
}
