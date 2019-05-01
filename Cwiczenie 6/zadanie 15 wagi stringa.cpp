#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 8;
using namespace std;

int waga(string s)
{
    int w=0;
    for(int i=0;i<s.length();i++){
        w+=(int)s[i];
    }
    return w;
}
int liczba_samoglosek(string s)
{
    int p=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='u')p++;
    }
    return p;
}

void wyraz(string s1, string s2,string s,string & sw,int l)
{   if(waga(s)> waga(s1)||l>s2.length())return;
    if(liczba_samoglosek(s)==liczba_samoglosek(s1) and waga(s)==waga(s1))sw=s;
    wyraz(s1,s2,s+s2[l],sw,l+1);
    wyraz(s1,s2,s,sw,l+1);
}
string wyrazy(string s1,string s2)
{
    string s ="";
    wyraz(s1,s2,"",s,1);
    return s;

}
int main()
{
  cout<<wyrazy("ula","abcdefghijklmnoprstuwzcz");
  return 0;
}
