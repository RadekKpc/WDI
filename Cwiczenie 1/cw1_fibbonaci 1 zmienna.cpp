#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int c;
    int d;
    int suma1;
    int suma2;
    int wyraz;
    cin>>wyraz;
    cout<<endl;

    for(int a=1;a<=wyraz/2 ;a++)
        for(int b=1;b<=wyraz/2 ;b++)
        {
            c=b;
            d=a;

            while(c<=wyraz&d<=wyraz)
            {
                c+=d;
                if(c==wyraz)
                    if(b<=a){
                        cout<<"("<<b<<","<<a<<")"<<endl;
                        return 0;
                    }
                d+=c;
                if(d==wyraz)
                    if(b<=a){
                        cout<<"("<<b<<","<<a<<")"<<endl;
                        return 0;
                    }
            }
        }
}
