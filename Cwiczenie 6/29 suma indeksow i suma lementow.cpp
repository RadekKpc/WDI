#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

const int N = 6;
using namespace std;

void podzial(int t[N],int l,int s,int si,int e,int & en,int &sn)
    {
        cout<<l<< " suma "<<s <<" si "<<si<<" e "<<e<<" en "<<en << " sn "<<sn <<endl;
        if(l==N)
        {
            if(si==s & e!=0){
                    cout<<"OOOOOOOOOOOOOOOOOOOO"<<endl;
                if(e<en)
                {
                en=e;
                sn=s;
                return;
                }
                else
                    return;
            }
            else
                return;
        }
        podzial(t,l+1,s,si,e,en,sn);
        podzial(t,l+1,s+t[l],si+l,e+1,en,sn);
    }

int suma(int t[N])
{
    int s=0;
    int e=99999;
    podzial(t,0,0,0,0,e,s);
    return s;
}

int main()
{
    int t[N] = {1,7,3,5,11,2};


    cout<<suma(t);
    return 0;
}
