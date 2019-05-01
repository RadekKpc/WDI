#include <iostream>

using namespace std;

int main()
{
    int n;
    int k;

    if(k>n)
        return 0;

    cout << "Podaj n : ";
    cin >> n;
    cout <<endl;
    cout << "Podaj k : ";
    cin >> k;
    cout <<endl;

    int npok;
    int nsilnia=1;
    int ksilnia=1;
    int nminusksilnia=1;

    cout << "n rowna sie" << n<<endl;

    cout << "k rowna sie" << k<<endl;
    for(int i=n;i>0;i--)
    {nsilnia*=i;
        cout << i << " * ";
    }
    cout << nsilnia<<endl;
    for(int i=k;i>0;i--)
        ksilnia*=i;
    for(int i=n-k;i>0;i--)
        nminusksilnia*=i;

    npok = (nsilnia/(ksilnia*nminusksilnia));
        cout << npok;
}
