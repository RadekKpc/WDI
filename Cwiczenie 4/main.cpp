#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;
const int MAX = 5;

bool czy_same_niepatrzyse(int p){

            for(int k=p;k>0;k/=10)
                {
                    if((k%10)%2==0)return false;
                }
                return true;

}

void fun(int t[MAX][MAX])
{
    bool f1 =true;
    bool f2=true;
        for(int i=0;i<MAX;i++)
        {
            if(f1)cout<<"lrcim"<<endl;
            f2=false;
            for(int j=0;j<MAX &!f2;j++)
            {
                f2=czy_same_niepatrzyse(t[i][j]);
                if(f2)cout<<"true "<<t[i][j] <<endl;
            }
            f1&=f2;
        }

    if(f1)cout<<"tak"<<endl;
        return;
    cout<< "Nie"<<endl;
}
int main(){
    for(int i =0;i<256;i++)
    {
        cout<<i<<" "<<(char) i<<endl;
    }
}

