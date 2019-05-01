#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a=1;
    int b=1;
    int c;
    cin>>c;

            while(((1/sqrt(5.0))*(pow((1+sqrt(5.0))/2.0,a)-pow((1-sqrt(5.0))/2.0,a)))<100000)
            {

                while(((1/sqrt(5.0))*(pow((1+sqrt(5.0))/2.0,b)-pow((1-sqrt(5.0))/2.0,b)))<100000)
                {
                    if(((1/sqrt(5.0))*(pow((1+sqrt(5.0))/2.0,b)-pow((1-sqrt(5.0))/2.0,b)))*(((1/sqrt(5.0))*(pow((1+sqrt(5.0))/2.0,a)-pow((1-sqrt(5.0))/2.0,a))))==c)
                    {
                        cout<<"T";
                        return 0;
                    }
                    b++;

                }
                 a++;
                 b=1;
            }

            cout<<"N";


}
