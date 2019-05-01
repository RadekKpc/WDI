#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>


using namespace std;
const int MAX =10;
const int MAX2=11;

int najdluzszy_ciag_identycznych(int t[MAX][MAX],int iloczyn)
{
        int l=0;
        int t2[MAX+4][MAX+4];

        for(int i=0;i<MAX+4;i++)
            for(int j=0;j<MAX+4;j++)
                t2[i][j]=-1;

        for(int i=0;i<MAX;i++)
            for(int j=0;j<MAX;j++)
                t2[i+2][j+2]=t[i][j];


        for(int i=0;i<MAX;i++)
        {
            for(int j=0;j<MAX-1;j++)
            {
                if(t2[i+2][j+2]*t2[i][j+1]==iloczyn)l++;
                if(t2[i+2][j+2]*t2[i][j+3]==iloczyn)l++;
                if(t2[i+2][j+2]*t2[i+4][j+1]==iloczyn)l++;
                if(t2[i+2][j+2]*t2[i+4][j+3]==iloczyn)l++;
                if(t2[i+2][j+2]*t2[i+3][j]==iloczyn)l++;
                if(t2[i+2][j+2]*t2[i+1][j]==iloczyn)l++;
                if(t2[i+2][j+2]*t2[i+3][j+4]==iloczyn)l++;
                if(t2[i+2][j+2]*t2[i+1][j+4]==iloczyn)l++;


            }
        }


    return l/2;
}

int main()
{
    srand(time(NULL));

    int t[MAX][MAX];
    int iloczyn;
    cin>>iloczyn;

    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            t[i][j]=rand()%9 +1;
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<< "wynik:"<<najdluzszy_ciag_identycznych(t,iloczyn);

}
