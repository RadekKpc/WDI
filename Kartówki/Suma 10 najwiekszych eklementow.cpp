#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int MAX = 30;

int main(){
    srand( time( NULL ) );

    int t[MAX];
    int r[10];
    int s=0;

      for(int i=0;i<MAX;i++){
       t[i]=rand()%1000 + 1;
       if(i<10)r[i]=0;
       cout<<t[i]<<" ";
    }

    for(int i=0;i<MAX;i++)
        for(int j=0;j<10;j++)
    if(t[i]>r[j]){
        r[j]=t[i];
        for(int k=0;k<10;k++)
            for(int l=k+1;l<10;l++)
                if(r[k]>r[l])swap(r[k],r[l]);
        break;
        }
        cout<<endl;

    for(int i=0;i<10;i++)
        {cout<<r[i]<<" ";s+=t[i];}
        cout<<endl<<s;




}

