#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstdio>


using namespace std;
const int MAX =10;
const int MAX2=11;

int najdluzszy_ciag_identycznych(int t[MAX][MAX])
{
    int w=0;
    int licznik=0,mlicznik=0;

        for(int i=0;i<MAX;i++)
        {
            for(int j=0;j<MAX-1;j++)
            {
                licznik=0;
                for(int p=j;t[i][p]==t[i][p+1]&p<MAX-1;p++)
                    licznik++;

                if(licznik>mlicznik){mlicznik=licznik; w=i;}
            }
        }


    return w;
}

int main()
{
    srand(time(NULL));

    int t[MAX][MAX];

    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++){
            t[i][j]=rand()%2 +1;
            cout<<t[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<< "wynik:"<<najdluzszy_ciag_identycznych(t);

}
