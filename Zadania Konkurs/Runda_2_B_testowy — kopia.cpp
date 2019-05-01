#include <iostream>
#include <string>
using namespace std;

int porownaj(string & a, string b)
    {
        cout<<"Badam b: "<<b<<" a: "<<a<<endl;
        int da =a.length();
        int db= b.length();
        if(da>db){
                cout<<"wieksza"<<endl;
            return 0;

        }

        for(int i=0;i<da;i++)
            if(a[i]!=b[i])
            {

                if(a[i]>b[i]){
                    for(int i = 0;i<db-da;i++)
                        a=a + '0';
                        cout<<"mniejsza wieksza : "<< a<<endl;
                        return db-da;
                }
                if(a[i]<b[i]){
                    for(int i = 0;i<db-da +1;i++)
                        a=a + '0';
                        cout<<"mniejsza mniejsza : "<< a<<endl;
                        return db-da +1;
                    }
            }


            bool flaga = true;
            for(int i=da;i<db & flaga;i++)
                if(b[i]!='9')
                {
                   flaga = false;
                }
            if(flaga){
                for(int i = 0;i<db-da +1;i++)
                a=a + '0';
                cout<<"mniejsza rowna dziewiatki : "<< a<<endl;
                return db-da +1;
                    }
            for(int i = da;i<db;i++)
                a= a + b[i];
            a[db-1]++;

            flaga = true;
        while(flaga){
            flaga = false;
        for(int i =db-1;i>=da;i--)
            if(a[i]==':')
            {
                cout<<"srodek "<<a<<endl;
                a[i]='0';
                a[i-1]++;
                flaga =true;
            }
        }
        cout<<"mniejsza rowna brak 9 : "<< a<<endl;
        return db-da;

    }

int main()
{
    long long int N = 0;
    string a="";
    string b="/";
    long long int result = 0;
    cin>>N;
    if(N==1){
        cin>>a;
        cout<<result<<endl;
        return 0;
    }

    for(int i =0;i<N;i++)
        {   cin>>a;
            result+=porownaj(a,b);
            cout<<"result : "<<result<<endl;
            b=a;
        }

    cout<<result<<endl;
    return 0;
}
