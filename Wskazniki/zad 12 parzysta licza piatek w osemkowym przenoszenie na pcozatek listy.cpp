#include <iostream>
using namespace std;


struct node{
    int val;
    node * next;
};



void wypisz(node * lista)
{
    while(lista!=NULL){
        cout<<lista->val<<endl;
        lista=lista->next;
    }
    cout<<endl;
    return;
}
bool warunek(int n)
{
    cout<<"warunek "<<n<<endl;
    int l=0;
    for(int i=n;n>0;n/=8)
    {
        cout<<n%8;
        if(n%8==5)l++;
    }
    cout<<endl;
    return (l!=0) & l%2==0;
}

void zad11(node *& l){

    if(l==NULL)return;
    node * p =l->next;
    node * q=l;



    while(p!=NULL)
    {
        cout<<"wksaznik"<<p->next;
        if(warunek((int)p)){
        node * tmp = new node;
        tmp->val=p->val;
        tmp->next=l;
        l=tmp;
        q->next=p->next;
        delete(p);
        p=q->next;
        continue;
        }
        q=p;
        p=p->next;


    }

    return;
}




int main()
{
    node * lista = new node;
    node * p = lista;

    node * lista2 = new node;
    node * p2 = lista2;

    lista->next=NULL;

   for(int i=0 ; i<10 ;i++){
        if(i<4)lista->val=i;
        if(i>=4)lista->val=i;
        lista->next = new node;
        lista=lista->next;

        lista2->val=(2*i + 1);
        lista2->next = new node;
        lista2=lista2->next;
    }
    lista->next = NULL;
    lista->val =10;

    lista2->next = NULL;
    lista2->val =21;

    lista=p;
    lista2=p2;

    lista->val=1;
    lista->next->val=2;
    lista->next->next->val = 3;

    wypisz(lista);

    cout<<"tutaj"<<endl;

    zad11(lista);
    cout<<endl;
    wypisz(lista);


}
