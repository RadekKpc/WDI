#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a =1;
    while(((1/sqrt(5.0))*(pow((1+sqrt(5.0))/2.0,a)-pow((1-sqrt(5.0))/2.0,a)))<100000)
        {
            cout << ((1/sqrt(5.0))*(pow((1+sqrt(5.0))/2.0,a)-pow((1-sqrt(5.0))/2.0,a)))<<endl;
            a++;
        }
}
