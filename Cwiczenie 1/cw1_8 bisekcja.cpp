#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double x1 =0;
    double epsilon = 1e-8;

    double a = 100;
    double b =  -100;


    while(true)
    {
        cout << "f(a)= "<<a*a*a -4<<endl;
        cout << "f(b)= "<<b*b*b -4<<endl;
        cout << "f(x1)= "<<x1*x1*x1 -4<<endl;
        cout << "a :" << a << endl;
        cout << "b :" << b << endl;
        cout << "x1 :" << x1 << endl;
        cout << "--------------------------" << endl;


        if(x1*x1*x1-4 ==0)
        {
                    cout << "1. :"<<x1;
                    return 0;
        }
        else
            {
                if(abs(a-b) > epsilon)
                {
                    if((x1*x1*x1-4)*(a*a*a-4)<0)
                        b=x1;
                    if((x1*x1*x1-4)*(b*b*b-4)<0)
                        a=x1;
                }
                else{
                    x1=(a+b)/2;
                    cout << "3. :"<<x1;
                    return 0;
                }
            }

    }


}

