#include <iostream>
#include <cmath>

using namespace std;

int main(){
 int a=1;
 int b=1;
 int ap=0;
 int bp=0;

    int x =2; //biedziemy przyblziac sqrt 2

    while((double) abs((a-ap)/(b - bp)) > 0.1){


        bp=b;
        ap=a;

        a= x + (a*a)/(b*b);
        b= 2*ap/b;

        cout<<a<<"/"<<b<<endl;
    }

    cout<<a<<"/"<<b<<endl;
    cout<<(double)a/b<<endl;


}
