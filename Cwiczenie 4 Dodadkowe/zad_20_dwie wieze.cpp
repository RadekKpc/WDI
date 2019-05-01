#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>


using namespace std;
const int MAX =10;
int dwie_wierze(int t[MAX][MAX]){

    bool t2[MAX][MAX];
    int wm1,km1,wm2,km2,sm=0,s=0;

    for(int i=0;i<MAX;i++)
        for(int j=0;j<MAX;j++)
        t2[i][j]=false;

    for(int w1=0;w1<MAX;w1++)
        for(int k1=0;k1<MAX;k1++)
            for(int w2=0;w2<MAX;w2++)
                for(int k2=0;k2<MAX;k2++)
                    {
                        for(int i=0;i<MAX;i++)
                            for(int j=0;j<MAX;j++)
                                t2[i][j]=false;

                        for(int i=0;i<MAX;i++)
                        {
                            t2[w1][i]=true;
                            t2[w2][i]=true;
                            t2[i][k1]=true;
                            t2[i][k2]=true;
                        }

                        t2[w1][k1]=false;
                        t2[w2][k2]=false;

                        s=0;

                        for(int i=0;i<MAX;i++)
                            for(int j=0;j<MAX;j++)
                                if(t2[i][j])s+=t[i][j];

                        if(s>sm){sm=s;wm1=w1;wm2=w2;km2=k2;km1=k1;}

                    }

    cout<<"w1:"<<wm1<<km1<<" w2:"<<wm2<<km2<<endl;
    return 0;
}

int main()
{
    srand(time(NULL));

    int t[MAX][MAX];
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++)
    {
        t[i][j]=rand()%100 +1;

    }

    }
    for(int i=0;i<MAX;i++)
    {
        t[3][i]=3;
        t[5][i]=4;
        t[i][6]=5;
        t[i][7]=3;
    }
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++)
    {

        cout<<t[i][j]<<" ";
    }
    cout<<endl;
    }

    cout<<dwie_wierze(t);
}
