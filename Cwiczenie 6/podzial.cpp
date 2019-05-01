#include <iostream>
#include <cmath>
#include <string>

const int N = 8;
using namespace std;

    convertInt(int num)
    {
        stringstream ss;
        ss << num;
        return ss.str();

    }
void podzial(int n,int ln,string r)
{
    if(n==0)cout<<r;
    else
        for(int i=ln;ln<=n;i++)

        {

            podzial(n-ln,ln,r +' '+ convertInt(ln));
        }
}

int main()
{
    podzial(9,1,"");
    return 0;
}
