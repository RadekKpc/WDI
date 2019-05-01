#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 8;
using namespace std;

void king(int t[N][N],int w,int k,int celw,int celk,bool & stop,int sz2[N][N],int l)
    {   int tk[8]={1,1,1,0,-1,-1,-1,0};
        int tw[8]={-1,0,1,1,1,0,-1,-1};
        int c =4;
        for(int i=0;i<N;i++){
                cout<<endl;
            for(int j=0;j<N;j++)
                if( i != w || j!=k)cout<<t[i][j]<<" ";
                else cout<<"1111 ";
        }

        if(w==celw && k==celk){cout<< "stop" <<endl;
        stop = false; return;}

        for(int i=0;i<8 & stop;i++){
            if(abs(celk-k)>=abs(celk -(k+tk[i])) & abs(celw -w)>=abs(celw -(w + tw[i])))
                {
                    for(int p=t[w+tw[i]][k+tk[i]];p>0;p/=10)
                        c=p%10;
                    if(t[w][k]%10< c)
                    {cout<<"warunek spelniony"<<endl;
                    sz2[w+tw[i]][k+tk[i]]=l;
                    king(t,w+tw[i],k+tk[i],celw,celk,stop,sz2,l+1);
                    }
                }
            }

    }




int main()
{
    int szachownica[8][8];
    int szachownica2[8][8];
    bool stop=true;
    for(int i =0;i<8;i++)
        for(int j=0;j<8;j++){
            szachownica[i][j]=4321;
            szachownica2[i][j]=0;}
    int w=0;
    int k=0;
    king(szachownica,w,k,3,4,stop,szachownica2,1);
    if(!stop)cout<<"moze"<<endl;
      for(int i =0;i<8;i++){
            cout<<endl;
        for(int j=0;j<8;j++)

            cout<<szachownica2[i][j]<<" ";
            }

    return 0;
}
