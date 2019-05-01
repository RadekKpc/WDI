#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int MAX = 10;
int na_binarne(int a)
{
    int b =0;
    for(int i=a;i>0;i/=10)b|=(1<<(i%10));
    return b;
}
void wypisz(int t2[MAX+2][MAX+2])
{
    for(int i=0;i<MAX+2;i++){
            cout<<endl;
        for(int j=0;j<MAX+2;j++)
            cout<<t2[i][j]<<" ";
    }

}
int ile_przyjaciolek(int t[MAX][MAX])
{
    int t2[MAX+2][MAX+2];

    for(int i=0;i<MAX+2;i++){
        for(int j=0;j<MAX+2;j++)
            t2[i][j]=0;
    }

    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            t[j][i]=rand() %3 + 1;

    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
            t2[j+1][i+1]=na_binarne(t[j][i]);

    t2[0][0]=t2[1][1];
    t2[0][MAX+1]=t2[1][MAX];
    t2[MAX+1][0]=t2[MAX][1];
    t2[MAX+1][MAX+1]=t2[MAX][MAX];

    for(int i =1;i<MAX+1;i++)
    {
    t2[0][i]=t2[1][i];
    t2[MAX+1][i]=t2[MAX][i];
    t2[i][0]=t2[i][1];
    t2[i][MAX+1]=t2[i][MAX];
    }

    wypisz(t2);

    int licnzik =0;

    for(int i = 1;i<MAX;i++)
        for(int j=1;j<MAX;j++)
        {
            bool a = true;
            for(int k= i-1;k<i+2;k++)
                for(int l=j-1;l<j+2;l++)
                    if(t2[i][j]!=t2[k][l])
                        a = false;

            if(a)licnzik++;
        }

    return licnzik;
}
int main(){
    srand (time(NULL));
    int t[MAX][MAX];

    cout<<ile_przyjaciolek(t);

}
