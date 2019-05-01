#include <iostream>
using namespace std;


struct node{
    int val;
    node * next;
};


void odwroc(node *& lista){

    if(lista==NULL)return;

    node * first = NULL;
    node * prev;

    while(lista!=NULL)
    {
        prev=lista;
        lista=lista->next;
        prev->next=first;
        first=prev;
    }

    lista = prev;
    return;

}

void wypisz(node * lista)
{
    while(lista!=NULL){
        cout<<lista->val<<endl;
        lista=lista->next;
    }
    return;
}

int main()
{
    node * lista = new node;
    node * p = lista;
    lista->next=NULL;
   for(int i=0 ; i<10 ;i++){
        lista->val=i;
        lista->next = new node;
        lista=lista->next;
    }
    lista->next = NULL;
    lista->val =10;


    lista =p;

    wypisz(lista);
    cout<<endl;
    odwroc(lista);
    wypisz(lista);

    return 0;
}
