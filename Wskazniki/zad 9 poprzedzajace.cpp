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

void zad9(node *& l)
{
    node * p =l;
    node * q=NULL;

    while(p!=NULL){


    if((p->next != NULL))
    while( p->next->val < p->val)
    {
        //cout<<"tutaj2 val "<<endl<<p->val<<" vn : "<<l->next->val<<endl;
        q=p->next;
        p->next=p->next->next;
        delete(q);
        if(p->next==NULL)break;

    }

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

   for(int i=-5 ; i<6 ;i++){
        lista->val=-i*i;
        lista->next = new node;
        lista=lista->next;

        lista2->val=(2*i + 1);
        lista2->next = new node;
        lista2=lista2->next;
    }
    lista->next = NULL;
    lista->val =9;

    lista2->next = NULL;
    lista2->val =21;

    lista=p;
    lista2=p2;

    lista->val=5;
    lista->next->val=1;
    lista->next->next->val = 3;

    wypisz(lista);

    cout<<"tutaj"<<endl;

    zad9(lista);

    wypisz(lista);


}
