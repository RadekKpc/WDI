#include <iostream>
using namespace std;


struct node{
    int v1;
    node * next;

};

void init(node *&lista){

    lista = new node;
    lista->v1=15;
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

void usun(node *& l ,int n)
{
   node * p=l;
   node * q=NULL;

   while(p->v1!=n)
   {
       q=p;
       p=p->next;
   }
   if(q==NULL)
   {
       node * tmp =p->next;
       delete(p);
       l=tmp;
       return;
   }
   q->next=p->next;
   delete(p);


   return;
}

int zad25(node *& l1,node *& l2){

    node *q=NULL;
    int licznik=0;

    for(node *p=l1;p!=NULL;p=p->next)
    {
        for(q=l2;q!=NULL;q=q->next)
            if(p->v1==q->v1)
                break;
        if(q==NULL)
        {
            licznik++;
            usun(l1,p->v1);
        }
    }

    for(node * s=l2;s!=NULL;s=s->next)
    {
        for(q=l1;q!=NULL;q=q->next)
            if(q->v1==s->v1)
                break;
        if(q==NULL)
        {
            licznik++;
            usun(l2,s->v1);
        }
    }
    return licznik;
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

    node * l2;
    init(l2);
    add(l2,9);
    add(l2,8);
    add(l2,70);
    add(l2,6);
    add(l2,10);
    add(l2,4);

    wypisz(lista);
    cout<<endl;
    wypisz(l2);

    cout<<"wyrzucono" << zad25(lista,l2)<<endl;
    wypisz(l2);
    cout<<endl;
    wypisz(lista);

    return 0;

}

