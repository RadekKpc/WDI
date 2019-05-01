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

void zad18(node *& l){

    int max_length=1;
    int length=1;
    int max_position=-1;
    int position=0;

    node * p=l;
    node * q=NULL;

    int before;
    bool flaga = true;

    while(p->next!=NULL)
    {

        before=p->v1;
        p=p->next;
        position++;
        q =p;
        length=1;
        cout<<max_position<<" "<<max_length<<endl;
        while(q!=NULL? q->v1>before : false ){
            length++;
            before=q->v1;
            q=q->next;

        }
        if(length>max_length){
            max_length=length;
            max_position=position;
            length=0;
            flaga=true;
            }
        if(length==max_length)flaga=false;

    }
        cout<<"km"<<endl;
    if(flaga)
    {
        p=l;
        q= NULL;

        for(int i=0;i<max_position-1;i++)
            {q=p; p=p->next;}
        for(int i=0;i<max_length;i++)
        {
            if(q==NULL)
            {
                l=p->next;
                delete(p);
                p=l;
                continue;
            }
            q->next=p->next;
            delete(p);
            p=q->next;

        }
    }
    return;
}


int main(){

    node * lista;
    init(lista);
    add(lista,0);
    add(lista,0);
    add(lista,0);
    add(lista,0);
    add(lista,0);
    add(lista,0);
    add(lista,0);
    add(lista,0);
    add(lista,0);
    add(lista,3);
    add(lista,2);
    add(lista,1);
    wypisz(lista);

    zad18(lista);
    wypisz(lista);




}

