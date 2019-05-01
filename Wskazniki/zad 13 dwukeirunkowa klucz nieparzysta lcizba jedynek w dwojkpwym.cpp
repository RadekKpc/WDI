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

bool warunek(int n)
{
    int l=0;
    cout<<n<<endl;
    for(int i=n;i>0;i/=2)
    {   cout<<i%2;
        l+=i%2;
    }
    cout<<" "<<n<<" "<<l%2<<endl;
    return l%2!=1;
}

void zad13( node *& l ){

    if(l==NULL)return;

    node * p =l->next;
    node * q=l;

    while(p->next!=NULL)
    {
        if(warunek((int)p))
        {
            q->next=p->next;
            p->next->before=q;
            delete(p);
            p=q->next;
            continue;
        }
        q=p;
        p=p->next;

    }
    if(warunek((int)p)){
        q->next=NULL;
        delete(p);
    }
    if(warunek((int)l))
    {
        node * tmp =l;
        l=l->next;
        delete tmp;
        l->before=NULL;
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

    lista->val=1;
    lista->next->val=2;
    lista->next->next->val = 3;

    wypisz(lista);

    cout<<"tutaj"<<endl;

    zad13(lista);
    cout<<endl;
    wypisz(lista);


}
