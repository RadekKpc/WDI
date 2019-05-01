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
void zad9(node *& l)
{
        odwroc(l);
        wypisz(l);
        node * p=l->next;;
        node * q =l;
        node * s=l;

        while(q->val<p->val & p!=NULL) //ustaiwamy na 1 neizerwoy
        {
            q=p;
            p=p->next;
            delete(q);
        }
        l=q;
        cout<<"siema"<<endl;
        wypisz(l);
        p=l;
        s=l;
        while(p->next!=NULL)
        {
            q=p;
            p=p->next;
            if(q->val<p->val)
            {
                s->next=q->next;
                delete(q);
                continue;
            }
            s=q;
        }
        odwroc(l);
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
        if(i<4)lista->val=-i*i + 30;
        if(i>=4)lista->val= -i;
        lista->next = new node;
        lista=lista->next;

        lista2->val=(2*i + 1);
        lista2->next = new node;
        lista2=lista2->next;
    }
    lista->next = NULL;
    lista->val =-6;

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
