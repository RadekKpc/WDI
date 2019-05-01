#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long int a;
    cin>>a;
    int length=0;
    int c;
    int d;
    int bin[40];

    for(unsigned long long int b=a;b%10>=1;length++)
        b/=10;

    for(int i=1;i<=length/2;i++)
    {
        c=((a%(unsigned long long int)pow(10.0,i)-a%(unsigned long long int)pow(10.0,i-1))/(unsigned long long int)pow(10.0,i-1));
        d=(a%(unsigned long long int)pow(10,length-i+1)-a%(unsigned long long int)ceil(pow(10,length-i)))/(unsigned long long int)ceil(pow(10,length-i));
        if(c!=d)
        {
            cout<<"N"<<endl;
            return 0;
        }

    }
    cout <<"T";


    //binarnie
    int i=0;
    for(;a>0;i++){
        bin[i]=a%2;
        a/=2;
        }
    int l=0;
    for(int j=i-1;j>=0;j--){
            cout<<bin[j]<<" "<<bin[l]<<endl;
        if(bin[j]!=bin[l]){
                cout<<"n";
                return 0;
            }
        l++;
        }
    cout<<"tak";
}
