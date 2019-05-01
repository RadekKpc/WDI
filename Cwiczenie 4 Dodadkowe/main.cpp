#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>


using namespace std;
const int MAX =10;
const int MAX2=11;

int najdluzszy_ciag_identycznych(int t[MAX][MAX],int iloczyn)
{
        int s=0,sm=0,w=0,k=0;
        int t2[MAX+2][MAX+2];

        for(int i=0;i<MAX+2;i++)
            for(int j=0;j<MAX+2;j++)
                t2[i][j]=0;

        for(int i=0;i<MAX;i++)
            for(int j=0;j<MAX;j++)
                t2[i+1][j+1]=t[i][j];




        for(int i=0;i<MAX;i++)
        {
            s=0;
            for(int j=0;j<MAX-1;j++)
            {
                s+=t2[i][j];
                s+=t2[i][j+1];
                s+=t2[i][j+2];
                s+=t2[i+1][j+2];
                s+=t2[i+2][j+2];
                s+=t2[i+2][j+1];
                s+=t2[i+2][j];
                s+=t2[i+1][j];

            if(s>sm){sm=s;k=j;w=i;}
            }
        }

    cout<<w<<"b;e"<<k<<endl;
    return 0;
}

int main()
{
    srand(time(NULL));

    int t[MAX][MAX];
    int iloczyn;
    cin>>iloczyn;

    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            t[i][j]=10*i+j;
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<< "wynik:"<<najdluzszy_ciag_identycznych(t,iloczyn);

}
