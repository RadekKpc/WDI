#include <iostream>

using namespace std;

int main()
{
    int a =1;
    int b =1;
    int c;
    int d;
    int suma;
    cin>>suma;
    cout<< endl;
    int suma2=1;

    while(suma2<suma)
    {
        cout<<a<<endl;
        c=a+b;
        a=b;
        b=c;
        suma2+=a;
    }
    a=1;
    b=1;
    while(suma2>=suma)
    {
        if(suma==suma2)
        {
            cout<<"Jestem";
            return 0;
        }
       suma2-=a;
       c=a+b;
       a=b;
       b=c;

    }
    cout<<"Nie jestem";
}

