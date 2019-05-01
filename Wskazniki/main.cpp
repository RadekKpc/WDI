#include <iostream>
using namespace std;


struct node{
    int val;
    node * next;

};

void init(node *&lista,int n){

    lista = new node;
    lista->v1=n;
    lista->next=NULL;
}

void add(node *& l,int v1)
{
    node * p = new node;
    p->v1=v1;
    p->next=l;
    l=p;
    return;
}

void wypisz(node * lista){

    while(lista!=NULL){
        cout<<lista->v1<<endl;
        lista=lista->next;
    }
    cout<<endl<<endl;
    return;
}

node * zad26(node * l1,node * l2){

    node * q=NULL;
    node * p=NULL;

}

int main(){

    node * lista;
    init(lista,11);
    add(lista,7);
    add(lista,5);
    add(lista,3);
    add(lista,2);

    node * l2;
    init(l2,4);
    add(l2,7);
    add(l2,2);
    add(l2,8);
    if(cykl(lista))cout<<"TAK"<<endl;

    node * l3;
    l3=zad26(lista,l2);
    wypisz(lista);
    wypisz(l2);
    wypisz(l3);

    return 0;

}

