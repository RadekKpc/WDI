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

node * najmniejszy(node * head,bool & flag){

    node * maks = head;
    node * prev = NULL;
    node * r = NULL;
    if(head->next==NULL) return head;

    while(head!=NULL)
    {
        if(maks->w<head->w){
        prev = r;
        maks=head;
        }
        r=head;
        head=head->next;
    }

    if(prev==NULL){flag = true; return maks;}
    prev->next=prev->next->next;
    flag = false;
    return maks;


}

void SelectSort2(node *& head){

    node * new_head = NULL;
    node * p = head;
    bool flag = false;
    while(p!=NULL){

        node * tmp = najmniejszy(p,flag);
        if(flag){p=p->next;}
        if(tmp !=NULL)
        {
           tmp->next=new_head;
           new_head=tmp;

        }
    }

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
    p->w = 99;
    lista->w = 7;
    lista->next = NULL;
    delete(lista);
    wypisz(p);
    cout<<"------------------"<<endl;
    SelectSort2(p);
    wypisz(p);


}
