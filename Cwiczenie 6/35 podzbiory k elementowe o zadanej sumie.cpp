#include <iostream>
#include <cmath>
#include <string>

const int N = 5;
using namespace std;

bool sumy_podzbiorow(int t[N],int k ,int s1 , int s2 ,int l,int e1,int e2)
    {
        return (l==N)? (l==N && s1==s2 && k==e1 && e1==e2) : (l>=N) ? false : sumy_podzbiorow(t,k,s1+t[l],s2,l+1,e1+1,e2)||sumy_podzbiorow(t,k,s1,s2+t[l],l+1,e1,e2+1)||sumy_podzbiorow(t,k,s1,s2,l+1,e1,e2);
    }
bool funkcja(int t[N],int k)
{
    return sumy_podzbiorow(t,k,0,0,0,0,0);
}

int main()
{
    int t[N]={3,1,2,3,99};
    if(funkcja(t,2))cout<<"tak";
    else cout<<"nie";
    return 0;
}
