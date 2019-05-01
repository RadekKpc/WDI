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
        cout<<lista->val<<endl;
        lista=lista->next;
    }
    cout<<endl;
    return;
}


void unikalne(node *& l){

    node * p =l;
    node * q;
    while(p->next!=NULL)
    {
        node * r =p->next;
        node * s = p;

        int v = p->val;

        int l=0;
        while(r!=NULL)
        {

            cout<<l<<endl;
            if(r->val==v)
            {
                s->next=r->next;
                delete(r);
                r=s->next;
                continue;
            }
            s=r;
            r=r->next;
            l++;
        }

        q=p;
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
    lista->next->val=3;
    lista->next->next->val = 3;

    wypisz(lista);

    cout<<"tutaj"<<endl;

    unikalne(lista);
    cout<<endl;
    wypisz(lista);


}
