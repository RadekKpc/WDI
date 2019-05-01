#include <iostream>
using namespace std;


struct node{
    int val;
    node * next;
    node * before;
};
void wypisz(node * lista)
{
    while(lista!=NULL){
        cout<<lista->val<<" "<<lista<<endl;
        lista=lista->next;
    }
    cout<<endl;
    return;
}


int zad16(node * l){

    node * p =l;
    node * q =NULL;
    int r=0;

    while(p!=NULL)
    {
        q=p;
        p=p->next;

        while(q==p){

            q->next=p->next;
            delete(p);
            p=q->next;
            r++;

        }
    }
    return r;

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

    lista->val=3;
    lista->next=lista;
    lista->next->next->val = 3;

    wypisz(lista);

    cout<<"tutaj"<<endl;

    zad16(lista);
    cout<<endl;
    wypisz(lista);


}
