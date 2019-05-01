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
void l_reverse(node * & head)
{
  node * p, * pc;
  if(head)
  {
    pc = head;
    while(pc->next)
    {
      p = pc->next;
      pc->next = p->next;
      p->next = head;
      head = p;
    }
  }
}
node * revers(node * lista)
{
        if(lista==NULL)return NULL;

        node * p = revers(lista->next);
        node * q =
        p;

        while(q->next !=NULL)
            q=q->next;
        q->next=lista;
        lista->next=NULL;
        return p;
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
    l_reverse(p);
    cout<<"-----------------"<<endl;
    wypisz(p);

}
