#include <iostream>
#include <cmath>
using namespace std;

struct ulamek{
    int l;
    int m;
};
int nwsd(int a ,int b){
    while(true)
    {   if(a<0)a*=(-1);
        if(b<0)b*=(-1);

        if(a>0)a=a%b;
        if(a==0)return b;
        if(b>0)b=b%a;
        if(b==0)return a;
    }
}
ulamek skracanie(ulamek & suma)
{
    int nwd = nwsd(suma.l,suma.m);
    suma.l=suma.l/nwd;
    suma.m=suma.m/nwd;
    return suma;
}

ulamek dodaj(ulamek a,ulamek b)
    {
      ulamek suma;

      suma.m=a.m*b.m;
      suma.l=a.l*b.m+a.m*b.l;
      skracanie(suma);
      return suma;
    };
    ulamek odejmij(ulamek a,ulamek b)
    {
      ulamek suma;

      suma.m=a.m*b.m;
      suma.l=a.l*b.m-a.m*b.l;
      skracanie(suma);
      return suma;
    };
ulamek iloczyn(ulamek a,ulamek b)
{
    ulamek iloczyn;
    iloczyn.l=a.l*b.l;
    iloczyn.m=a.m*b.m;
    return skracanie(iloczyn);
}
ulamek dzielenie(ulamek a,ulamek b)
{
    ulamek iloczyn;
    iloczyn.l=a.l*b.m;
    iloczyn.m=a.m*b.l;
    return skracanie(iloczyn);
}
ulamek pow_u(ulamek u,ulamek n)
{
    int l=u.l; int m=u.m;
    if(n.l==0)
    {
        u.l=1;
        u.m=1;
        return u;
    }
    if(n.l<0)
    {
        swap(u.l,u.m);
        swap(m,l);
        n.l*=(-1);
    }
    for(int i=n.l;i>1;i--)
    {   u.m*=m;
        u.l*=l;
    }
    return skracanie(u);
}

void wypisz(ulamek u)
{
    skracanie(u);
    cout<<u.l<<"/"<<u.m<<endl;
}
ulamek wprowadz()
    {
      ulamek a;
      cin>>a.l;
      cin>>a.m;
      return a;
    }
ulamek wyznacznik(ulamek a1,ulamek a2,ulamek b1,ulamek b2)
{
    ulamek w;
    w=odejmij(iloczyn(a1,b2),iloczyn(a2,b1));
    w.l=abs(w.l); w.m=abs(w.m);
    return w;
}
void uklad_rownan(ulamek a1,ulamek a2,ulamek b1,ulamek b2,ulamek c1,ulamek c2){
    ulamek wx= wyznacznik(b1,c1,b2,c2);
    ulamek wy= wyznacznik(a1,c1,a2,c2);
    ulamek w=wyznacznik(a1,b1,a2,b2);

    cout<<"wx;";
    wypisz(wx);
    cout<<" wy:";
    wypisz(wy);
        cout<<" w:";
    wypisz(w);

    ulamek x,y;

    x = dzielenie(wx,w);
    y = dzielenie(wy,w);

    cout<<"x;";
    wypisz(x);
    cout<<" y:";
    wypisz(y);


}



int main()
{
    ulamek a1,a2,b1,b2,c1,c2;

    a1.l=72;
    a2.l=33;
    b1.l=24;
    b2.l=47;
    c1.l=31;
    c2.l=22;

    a1.m=12;
    a2.m=11;
    b1.m=14;
    b2.m=51;
    c1.m=12;
    c2.m=12;

    uklad_rownan(a1,a2,b1,b2,c1,c2);

    return 0;
}
