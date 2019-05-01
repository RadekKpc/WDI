#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

struct node{
    int w;
    node * next;
};

void wypisz(node * lista)
{
    while(lista!=NULL){
        cout<<lista->w<<endl;
        lista=lista->next;
    }
    return;
}

node * najmniejszy(node * p)
{
    if(p==NULL)return p;
    if(p->next==NULL){return NULL;}

    node * q=p->next;
    node * r = p;
    node * a=p;
    while(q!=NULL)
    {
       if(q->w>p->w)
            {
                p=q;
                a=r;
            }

        r=r->next;
        q=q->next;
    }

    return a;
}

void zamien(node *& q ,node *& n , node *& p , node *& np  ){

       /*
       } if(p==NULL & np==NULL)return;
        if(p==NULL)
        {
            node * tmp=q->next;
            q->next=n->next;
            np->next=q;
            n->next=tmp;
            q=n;
            return;
        }*/
        node * l = p;
        if(p!=NULL){
        cout<<"***************"<<p->w<<"  "<<q->w<< " "<<np->w<<" "<<n->w<<" "<<endl;
        node * tmp = q->next;
        q->next=n->next;
        cout<<"***************"<<p->w<<"  "<<q->w<< " "<<np->w<<" "<<n->w<<" "<<endl;
        n->next=tmp;
        p->next=n;
        np->next=q;
        cout<<np->next->w<<endl;
        cout<<"::::::::::::"<<endl;
        wypisz(l);
       cout<<"::::::::::::"<<endl;
        return;
        }

}


void SelectionSort(node *& lista){
    if(lista==NULL || lista->next==NULL )return;

    node * p = NULL;
    node * q = lista;
    node * n = NULL;
    node * np = NULL;
    node * tmp;

    while(q!=NULL)
    {

        //n = najmniejszy(q,np);

        //ZAMIANA
        if(p!=NULL)
        cout<<p->w<<" "<<q->w<<" "<<np->w<<" "<<n->w<<endl;


        p=q;
        q=q->next;


    }

    return;

}

node * poprz(node * head){

    node * maks = head;
    node * tmp = head->next;
    if(tmp==NULL)return NULL;
    while(tmp->next!=NULL){
        if(tmp->next->w>maks->next->w)
        {
            maks=tmp;
            tmp=tmp->next;
        }
    }
    tmp=maks->next;
    maks->next=maks->next->next;
    return tmp;

}

void SelectSort(node *& head)
{
    node * new_head = NULL;
    node * wartownik = new node;
    wartownik->next=head;
    head = wartownik;
    node * tmp;

    do{ cout<<" SSS"<<endl;
            tmp = najmniejszy(wartownik);
            cout<<" SSS"<<tmp->w<<endl;
        if(tmp!=NULL)
        {
            tmp->next=new_head;
            new_head = tmp;
        }


    }while(tmp!=NULL);
    delete(wartownik);
    head=new_head;
}

int main()
{
    srand(time(NULL));
    node * lista = new node;
    node * p = lista;

    lista->next=NULL;
   for(int i=0 ; i<10 ;i++){
        lista->w=(rand()%40 + 1);
        lista->next = new node;
        lista=lista->next;
    }
    lista->w = 11;
    lista->next = NULL;
    wypisz(p);

    SelectSort(p);
   wypisz(p);
    cout<<"____________________"<<endl;

  //  node * l =p;
  //  node * m = p->next;
 //   zamien(m,p->next->next->next,p,p->next->next);
  //  wypisz(l);

}
