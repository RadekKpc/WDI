#include <iostream>

using namespace std;
struct node{
    int w;
    node *next;
};

void wstaw(node *&se,int vol)
{
    node * p =se;
    node * q = NULL;
    while(p!=NULL and p->w<vol)
    {
        q=p;
        p=p->next;
    }

    if(p!=NULL and p->w==vol)return;

    node * tmp = new node;
    tmp->w=vol;

    if(q!=NULL){
        q->next=tmp;
        tmp->next=p;
    }
    else{
        tmp->next=p;se=tmp;
    }

}

bool wyszukiwanie(node *se,int vol)
    {

        while(se->w != vol&se->w<=vol & se->next!=NULL)
            se=se->next;

        return se->w==vol;

    }

bool rekurencyjne_wyszukiwanie(node * se,int vol)
{
    if(se==NULL)return false;
    if(se->w==vol)return true;
        return rekurencyjne_wyszukiwanie(se->next,vol);
}

void usun(node *& se,int vol)
{
    node * p =se;
    node * q = NULL;

    while(p->w!=vol)
    {
        q=p;
        p=p->next;
    }

    q->next=p->next;
    delete p;
}



int main()
{
    node * first =NULL;

   wstaw(first,2);
    wstaw(first,4);
       wstaw(first,3);
    wstaw(first,1);
       wstaw(first,0);
    wstaw(first,8);
       wstaw(first,12);
    wstaw(first,33);
    if(wyszukiwanie(first,2))cout<<"istnieje";
    usun(first,2);
    if(wyszukiwanie(first,2))cout<<" nadal istnieje";



    return 0;
}
