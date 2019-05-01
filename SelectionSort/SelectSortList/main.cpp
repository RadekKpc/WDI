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
    delete(lista);
    wypisz(p);


}
