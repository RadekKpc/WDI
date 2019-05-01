#include <iostream>
#include <cmath>

using namespace std;

int fun(int a,int b)
{
    int c =1;
    if(b==0)
        return 1;
    for(int i=b;i>0;i--)
        c*=a;

    return c;
}


int main()
{
    int n;
    int n2=0;
    int k =0;
    cin>>n;
    int length=0;


    for(int a=n;a%10>=1;length++)
        a/=10;

    int cyfra[length];

    for(int i=0;i<length;i++)
        cyfra[i]=ceil((n%fun(10,i+1)-n%fun(10,i))/fun(10,i));


    for(int i =1;i<fun(2,length);i++)
    {
        k=0;
        n2=0;
        int l=0;

        for(int j=1;j<fun(2,length);j*=2)
        {
            if(!(i&j))
                k--;

            else
                n2+=cyfra[l]*fun(10,k);

                k++;
                l++;
        }

                if(n2%7==0)
                cout<<n2<<endl;
    }

}

/*

a =i;
        for(int j=0;j<length;j++)
        {
            if(a%2==1)
                jestlubniema[j]=1;
            else
                jestlubniema[j]=0;

                a/=2;

        }
        for(int j=0;j<length;j++)
            {
                if(jestlubniema[j]==0)
                    for(int k=j+1;k<length;k++)
                        rzad[k]--;

                if(jestlubniema[j]==1)
                    n2+=cyfra[j]*pow(10,rzad[j]);

                   for(int l=0;l<length;l++)
                    cout<<jestlubniema[l]<<endl<<rzad[l]<<" rzad"<<endl<<cyfra[l]<<" cyfra"<<endl<<n2<<" n2"<<endl;


            }

            if(n2%7==0)
                cout<<n2<<endl;

            n2=0;
            for(int l=0;l<length;l++)
                rzad[l]=l;
*/


