#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int p;
     while(n>0)
     {
         p=n%10;
         n/=10;
         if(n%10>p)
            cout << "N";

     }
}
