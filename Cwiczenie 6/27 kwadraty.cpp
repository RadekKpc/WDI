#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 4;
using namespace std;

struct kwadrat { int x1,x2,y1,y2; };

int pole(kwadrat k)
    {
        return (k.x2-k.x1)*(k.y2-k.y1);
    }
bool pokrywa(int wziete[N],kwadrat t[N])
{
    bool flaga = false;
    for(int i =0;i<N & !flaga;i++){
            if(wziete[i]==-1)
            continue;
        for(int j=i+1;j<N;j++)
        {
        if(wziete[j]==-1)
            continue;
        if(t[wziete[i]].x1>=t[wziete[j]].x2 || t[wziete[i]].x2<=t[wziete[j]].x1 || t[wziete[i]].y1>=t[wziete[j]].y2 || t[wziete[i]].y2<=t[wziete[j]].y1)
            flaga = false;
        else
        {
            cout<<"wyskakouje"<<endl;
            flaga = true;
            break;
        }
        }
    }
    return flaga;
}

bool kwadraty(int s, int l,int i,kwadrat t[N],int wziete[N],bool flaga)
    {
        cout<<l<<" wziete : " <<i<<" suma pol : "<<s<<endl;
        if(flaga)wziete[i-1]=l-1;
        if(l>N || i>3){
                cout << "przekroczylo "<<endl;
            return false;
        }
        if(i==3)
            if(s==2016){
                    cout<<"suma sie zgadza"<<endl;
                return !pokrywa(wziete,t);
            }
            else
                return false;

        return kwadraty(s+pole(t[l]),l+1,i+1,t,wziete,true)||kwadraty(s,l+1,i,t,wziete,false);



    }


int main()
{
    kwadrat t[N];
    int w[N];

    t[0].x1=1;
    t[0].x2=101;
    t[0].y1=1;
    t[0].y2=11;

    t[1].x1=51;
    t[1].x2=151;
    t[1].y1=-5;
    t[1].y2=5;

    t[2].x1=1000;
    t[2].x2=1004;
    t[2].y1=500;
    t[2].y2=504;

    t[3].x1=504;
    t[3].x2=604;
    t[3].y1=504;
    t[3].y2=514;

    cout<<pole(t[0])<<endl;
    cout<<pole(t[1])<<endl;
    cout<<pole(t[2])<<endl;
    for(int i=0;i<N;i++)
        w[i]=-1;
    if(kwadraty(0,0,0,t,w,false))
        cout<<"moznaaaaa";

    return 0;
}
