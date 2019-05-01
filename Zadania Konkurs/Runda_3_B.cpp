#include <iostream>
#include <string>
using namespace std;

int main()
{
    int a;
    cin>>a;
    string s ="";
    cin>>s;
    if(a>0)
    {
        for(int i=0;i<a/2;i++)
            if(s[i] != s[a-i-1])
            {
                cout<<"NIE"<<endl;
                return 0;
            }

            cout<<"TAK"<<endl;
            return 0;
    }
    else
    {       int d =s.length();
         for(int i=0;i<d/2;i++)
            if(s[i] != s[d-i-1])
            {
                cout<<"NIE"<<endl;
                return 0;
            }

            cout<<"TAK"<<endl;
            return 0;

    }

    return 0;
}
