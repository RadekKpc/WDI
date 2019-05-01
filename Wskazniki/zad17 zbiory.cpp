#include <iostream>
using namespace std;


struct node{
    int v1;
    int v2;
    node * next;

};

void init(node *&lista){

    lista = new node;
    lista->v1=13;
    lista->v2=17;
    lista->next=NULL;
}

void add(node *& l,int v1,int v2)
{
    node * p = new node;
    p->v1=v1;
    p->v2=v2;
    p->next=l;
    l=p;
    return;
}

void wypisz(node * lista){

    while(lista!=NULL){
        cout<<lista->v1<<" "<<lista->v2<<endl;
        lista=lista->next;
    }
    cout<<endl;
    return;
}

void reduc(node * & lista){

    node * p=lista;

    while(p!=NULL)
    {
        cout<<"tutaj2"<<endl;
        node * r =p->next;
        node * s=p;
        cout<<"here" <<p->v1<<" "<<p->v2<<endl;
        while(r!=NULL){
            cout<<"    wchodze"<<endl;
            if(!(p->v2<r->v1) & !(r->v2<p->v1))
            {
                cout<<r->v1<<" "<<r->v2<<"wywalam"<<endl;
                p->v1=min(p->v1,r->v1);
                p->v2=max(p->v2,r->v2);
                s->next=r->next;
                delete(r);
                r=s->next;
                continue;

            }
            s=r;
            r=r->next;
        }
        p=p->next;
    }

}

int main(){

    node * lista;
    init(lista);
    add(lista,15,19);
    add(lista,2,5);
    add(lista,7,11);
    add(lista,8,12);
    add(lista,5,6);

    wypisz(lista);
    reduc(lista);
    wypisz(lista);




}

