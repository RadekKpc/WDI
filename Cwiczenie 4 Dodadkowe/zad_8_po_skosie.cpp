#include <iostream>

using namespace std;
const int MAX =10;
int najdluzszy_geo(int t[MAX][MAX]){
    int k=0;
    int w=MAX-2;
    int ml=0;

    for(int i=0;i<2*MAX-5;i++)
       {

           i<MAX-2?w-- : k++;

                int r=k;
                int p=w;
                int licznik =2;
                while(t[p+1][r+1]*t[p+1][r+1]==t[p][r]*t[p+2][r+2]&p<MAX-2&r<MAX-2){
                    licznik++;
                    p++;r++;
                    }
                    j++;
                    l++;

                if(licznik>ml)ml=licznik;
            }


       }

      if(ml>2)return ml;else return 1;


}

int main()
{
    int t[MAX][MAX];
    for(int i=0;i<MAX;i++){
        for(int j=0;j<MAX;j++)
    {
        t[i][j]=1;
        cout<<t[i][j]<<" ";
    }
    cout<<endl;
    }

    cout<<najdluzszy_geo(t);
}
