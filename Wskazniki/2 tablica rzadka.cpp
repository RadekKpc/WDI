#include <iostream>

using namespace std;
struct node{
    int indeks;
    int val;
    node *next;
};

void init(node *&tab)
{
    node * tmp = new node;
    tmp->next=NULL;
    tmp->indeks=-1;
    tab = tmp;
}

int value(node *tab,int n)
    {
        while(tab->indeks != n & tab->indeks<=n)
                tab = tab->next;
     return (tab->indeks==n)? tab->val : -1;

    }

void ustaw(node *&tab,int n,int wartosc)
{
    node * p = tab;
    node * q =NULL;

    if(p->indeks ==-1)
    {
        tab->val=wartosc;
        tab->indeks=n;
        return;
    }


    while(p->indeks < n and p->next!=NULL)
    {
        q=p;
        p=p->next;
    }
    if(p->indeks==n)
    {
            p->val=wartosc;
            return;
    }

    node * tmp = new node;
    tmp->indeks=n;
    tmp->val=wartosc;


    if(q==NULL)
    {
        tmp->next=p;
        tab=tmp;


    }else
    {

        q->next=tmp;
        tmp->next=p;

    }

}

void wypisz(node * tab)
{
    cout<<tab->indeks<<" "<<tab->val<<" "<<tab->next<<endl;

    if(tab->next !=NULL)
    wypisz(tab->next);

    return;
}

int main()
{
    node * tablica;
    init(tablica);

    ustaw(tablica,5,55);

    cout<<value(tablica,5)<<endl;
      cout<<endl;
  wypisz(tablica);

        ustaw(tablica,5,555);

  cout<<value(tablica,5)<<endl;
    cout<<endl;
  wypisz(tablica);

          ustaw(tablica,6,66);

  cout<<value(tablica,6)<<endl;
    cout<<endl;
  wypisz(tablica);

          ustaw(tablica,7,77);

  cout<<value(tablica,7)<<endl;
    cout<<endl;
  wypisz(tablica);

          ustaw(tablica,2,22);

  cout<<value(tablica,2)<<endl;
    cout<<endl;
  wypisz(tablica);

          ustaw(tablica,7,777);

  cout<<value(tablica,7)<<endl;
    cout<<endl;
  wypisz(tablica);

          ustaw(tablica,6,666);

  cout<<value(tablica,6)<<endl;
    cout<<endl;
  wypisz(tablica);

          ustaw(tablica,5,5555);

  cout<<value(tablica,5)<<endl;


  cout<<endl;
  wypisz(tablica);
    return 0;
}
