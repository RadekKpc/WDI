#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int piatki=0,trojki=0,dwojki=0;

    for(int i=1;pow(2,i)<=n;i++)
    {
        dwojki++;
        if(pow(3,i)<=n)
        trojki++;
        if(pow(5,i)<=n)
        piatki++;
    }

    for(int i=dwojki;i>=0;i--){
        for(int j=trojki;j>=0;j--){
            for(int k=piatki;k>=0;k--){
                    if(pow(2.0,i)*pow(3.0,j)*pow(5.0,k)<=n)
                        cout<<pow(2,i)*pow(3,j)*pow(5,k)<<"= 2^"<<i<<"* 3^"<<j<<"* 5^"<<k<<endl;
            }
        }
    }
}


