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

void zad10(node *& l)
{
    node * p=l;

    if(l==NULL)return; //dla 0 erementowej
    if(l->next==NULL)return; //dla 1 lementowej
            if(l->next->val%l->val ==0)
        {
            p=l;
            l=l->next;
            delete(p);

        }
    if(l->next->next==NULL){ //dla 2 ementowej



        return;
    }
        node * first =l;
    node * q =l->next;
    p=l->next->next;

    while(p!=NULL)
    {
        if(p->val%q->val==0)
        {
            first->next=p;
            delete(q);

            q=p;
            p=p->next;
            continue;
        }

        first=q;
        q=q->next;
        p=p->next;

    }
}


int main()
{
    node * lista = new node;
    node * p = lista;

    node * lista2 = new node;
    node * p2 = lista2;

    lista->next=NULL;

   for(int i=1 ; i<10 ;i++){
        lista->val=i;
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

    wypisz(lista);

    cout<<"tutaj"<<endl;

    zad10(lista);

    wypisz(lista);


}
