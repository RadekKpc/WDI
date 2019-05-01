#include <iostream>

using namespace std;

int zlicz_podzbiory(int right,int left,int licznik)
    {
        if(licznik == 0)
            return 1;

        return (right>0 & left >0) ? zlicz_podzbiory(right1-1;left,licznik-1) + zlicz_podzbiory(int right,int left-1,licznik-1) + 1 : (right > 0)


    }

int main()
{
    int result =0;
      cout<< zlicz_podzbiory(2,1,result,2+1);

    return 0;
}
