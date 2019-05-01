#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 6;
using namespace std;
struct punkt { float x,y; };

bool punkty(punkt t[N],int r,float k2,float k,int l,float sx,float sy){

    cout<<l<<" sx "<<sx<<" sy "<<sy<<" k "<<k<<endl;
    return (l==N) ? (k==0) ? (sqrt(pow(sx/k2,2)+pow(sy/k2,2)))<r : false : punkty(t,r,k2,k-1,l+1,sx+t[l].x,sy+t[l].y)||punkty(t,r,k2,k,l+1,sx,sy);

}


int main()
{
    punkt t[N];

    t[0].x = 1;
    t[0].y = 1;

    t[1].x = 2;
    t[1].y = 2;

    t[2].x = 10;
    t[2].y = 10;

    t[3].x = -13;
    t[3].y = -11;

    t[4].x = 10000;
    t[4].y = 52222;

    t[5].x = 53333;
    t[5].y = 1222;

    if(punkty(t,5,4,4,0,0,0))cout<<"mozna";
    return 0;
}
