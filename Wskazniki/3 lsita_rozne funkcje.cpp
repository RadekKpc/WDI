#include <iostream>
using namespace std;


struct node{
    int val;
    node * next;
};

void put(node *& l,int v)
    {
        node * p = l;

        while(p->next!=NULL)
            p=p->next;

        node * tmp = new node;
        tmp->val=v;
        tmp->next=NULL;
        p->next=tmp;

    }

void get(node *& l){

        node * p = l;
        node * q = NULL;
        while(p->next !=NULL)
        {   q=p;
            p=p->next;
        }
        delete(p);
        q->next=NULL;
}

void usun_co_drugi(node * l){

    node * p =l;
    node * q =l->next;
    node * s = NULL;

    while(q!=NULL)
    {
        cout<<"p "<<p->val<<" q "<<q->val<<endl;
        p->next=q->next;
        delete(q);
        p=p->next;
        if(p==NULL)break;
        q=p->next;
    }

    return ;
}

void wypisz(node * l)
{
    cout<<l->val<<endl;
    if(l->next!=NULL)
        wypisz(l->next);

}

int wewnetrzna(node *& l)
    {
        if(l->next==NULL)
        {
            if(l->val==9)
            {
                l->val=0;
                return 1;
            }

            l->val++;
            return 0;
        }
        l->val=(l->val + wewnetrzna(l->next))%10;
        return (l->val==0) ? 1 : 0;

    }

void plus_jeden(node *& l)
    {
        if(wewnetrzna(l)==1)
        {
            node * tmp = new node;
            tmp->val=1;
            tmp->next=l;
            l=tmp;
        }
        return;
    }

node * dodaj(node * lp,node * ld)
{
    int rszta =0;
    node * p = lp;
    node * d = ld;
    node * siema = new node;
    siema->next=NULL;
    siema->val=0;
    node * result = siema;
    int l1=0;
    int l2=0;

    while(p!=NULL)
        {
            l1++;
            p=p->next;
        }
    while(d!=NULL)
        {
            l2++;
            d=d->next;
        }
    cout<<"l1 "<<l1<<" l2 "<<l2<<endl;
    p=lp;
    d=ld;
    if(l2>l1){int z=l1;l1=l2;l2=z;p=d;d=lp;}

    for(int i=0;i<l1;i++)
    {

        siema->val=p->val;
        if(i>=l1-l2){siema->val+=d->val;
        d=d->next;
        }
        if(p->next!=NULL)put(siema,0);
        siema=siema->next;
        p=p->next;

    }
    d =NULL;
    p=result;

    if(p->val>9)
    {
        node * tmp = new node;
        tmp->val=p->val%10;
        tmp->next=p;
        result=tmp;
    }
        wypisz(result);
        cout<<endl;

    while(p!=NULL)
    {
        if(d!=NULL)d->val+=p->val%10;
        p->val/=10;
        d=p;
        p=p->next;
    }

    wypisz(result);
    return result;
}


void klucz(node *& l,int key)
{
    node * p = l;
    node * q = NULL;
    while(p!=NULL and key != p->val)
        {   q=p;
            p=p->next;

        }

    if(p==NULL)
        {   put(l,key);
           // q->next=new node;
           // q->next->val=key;
          //  q->next->next=NULL;
        }
    else
    {   if(q!=NULL){
            q->next=p->next;
            delete(p);
        }
        else{
            l=p->next;
            delete(p);
        }
    }

    return;
}

int main()
{
    node * lista = new node;
    lista->next=NULL;
    lista->val=2;

    node * lista2 = new node;
    lista2->next=NULL;
    lista2->val=1;

    node * suma = NULL;

    for(int i = 0 ;i<8;i++)
        put(lista2,10*i);
    for(int i = 0 ;i<5;i++)
            put(lista,9);


    wypisz(lista2);cout<<endl;
    klucz(lista2,32);
    wypisz(lista2);

    return 0;
}
