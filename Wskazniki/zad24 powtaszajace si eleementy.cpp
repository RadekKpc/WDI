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

void usun(node *& l ,int n)
{
   node * p=l;
   node * q=NULL;

   while(p->v1!=n)
   {   q=p;
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

   wypisz(l);

   return;
}

int zad24(node *& l1,node *& l2){

    node * p =l2;
    node * q= l1;
    int licznik =0;

    while(p!=NULL){
            q=l1;
        while(q!=NULL ? q->v1<=p->v1 : false)
            {
                cout<<"sprawdzam "<<q->v1<<" "<<p->v1<<endl;
                if(q->v1==p->v1)
                {
                    cout<<"wywalam "<<q->v1<<endl;
                    licznik++;
                    usun(l1,q->v1);
                    usun(l2,p->v1);
                    break;
                }
                q=q->next;
            }
        p=p->next;
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
    add(l2,60);
    add(l2,10);
    add(l2,72);
    add(l2,11);
    add(l2,12);
    add(l2,52);

    wypisz(lista);
    cout<<endl;
    wypisz(l2);

    cout<<"wyrzucono" << zad24(lista,l2)<<endl;
    wypisz(l2);
    wypisz(lista);

    return 0;

}

