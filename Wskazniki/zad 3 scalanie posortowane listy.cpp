#include <iostream>
using namespace std;


struct node{
    int val;
    node * next;
};



void wypisz(node * lista)
{
    while(lista!=NULL){
        cout<<lista->vz  al<<endl;
        lista=lista->next;
    }
    return;
}

node * scal(node * l1,node * l2){

        if(l1==NULL)return l2;
        if(l2==NULL) return l1;

        if(l1->val<l2->val){
            l1->next=scal(l1->next,l2);
            return l1;
        }
        if(l1->val>=l2->val){
            l2->next=scal(l1,l2->next);
            return l2;
        }


}

int main()
{
    node * lista = new node;
    node * p = lista;

    node * lista2 = new node;
    node * p2 = lista2;

    lista->next=NULL;

   for(int i=0 ; i<10 ;i++){
        lista->val=2*i;
        lista->next = new node;
        lista=lista->next;

        lista2->val=(2*i + 1);
        lista2->next = new node;
        lista2=lista2->next;
    }
    lista->next = NULL;
    lista->val =22;

    lista2->next = NULL;
    lista2->val =21;


    lista =p;
    lista2=p2;

    wypisz(lista);

    cout<<endl;
    wypisz(lista2);
    //odwroc(lista);
   // wypisz(lista);

   node * lista3 = new node;

   lista3 = scal(lista,lista2);
   wypisz(lista3);

    return 0;
}
