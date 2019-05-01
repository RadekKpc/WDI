#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>


using namespace std;
const int MAX =10;
const int MAX2=11;

bool czy_komplementarne(int a, int b){

    int l=0;

    for(int i=a;i>0;i/=2)
        if(i%2==1)l++;
    for(int i=b;i>0;i/=2)
        if(i%2==1)l--;

    if(l==0)return true;
    else return false;


}

bool czy_istnieje_takie_przesuniecie(int t1[MAX][MAX],int t2[MAX2][MAX2])
{
    int l=0;
    for(int i=0;i<MAX2-MAX+1;i++)
    for(int j=0;j<MAX2-MAX+1;j++){

            l=0;
            for(int w=0;w<MAX;w++)
                for(int k=0;k<MAX;k++)
                    if(czy_komplementarne(t1[w][k],t2[w+i][k+j]))l++;
            if(l>=MAX*MAX/3)return true;
    }

    return false;
}
int main()
{
    srand(time(NULL));

    int t1[MAX][MAX];
    int t2[MAX2][MAX2];
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++)
    {
        t1[i][j]=rand()%100 +10;

    }
    }
    for(int i=0;i<MAX2;i++){
            cout<<endl;
        for(int j=0;j<MAX2;j++)
    {
        t2[i][j]=rand()%10 +1;
        cout<<t2[i][j]<<" ";
    }

    }
    cout<<endl;
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++)
    {

        cout<<t1[i][j]<<" ";
    }
    cout<<endl;
    }

    if(czy_istnieje_takie_przesuniecie(t1,t2))cout<<"tak";

    else cout<<"nie";
}
