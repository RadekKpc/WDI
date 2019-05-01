#include <iostream>
using namespace std;


struct node{
    int v1;
    node * next;

};

void init(node *&lista){

    lista = new node;
    lista->v1=8;
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
    cout<<endl;
    return;
}

bool cykl(node * l)
{
    node * p=l;
    node * q=l;

    while(q!=NULL & q->next!=NULL){
    cout<<"wyszedlem "<<p->v1<<" "<<q->v1<<endl;
        q=q->next->next;
        p=p->next;
        if(p==q)return true;
    }
    return false;
}

int cykl_lenght(node * l){

    node * p=l;
    node * q=l->next;
    while(p!=q){
        p=p->next;
        q=q->next->next;
    }
    cout<<"wyszedlem "<<p->v1<<" "<<q->v1<<endl;
    q=q->next;
    int r=1;
    while(q!=p)
    {   cout<<q->v1<<" "<<p->v1<<endl;
        q=q->next;
        r++;
    }
    return r;

}

int main(){

    node * lista;
    init(lista);
    add(lista,7);
    add(lista,6);
    add(lista,5);
    add(lista,4);
    add(lista,3);
    add(lista,2);
    add(lista,1);

    lista->next->next->next->next->next->next->next->next=lista->next->next->next;



    if(cykl(lista))cout<<"TAK"<<endl;
    cout<<cykl_lenght(lista);

    return 0;

}

