#include <iostream>
#include <cmath>

using namespace std;
int f(int n) { return n<10 ? n : (f(n/10)+n%10-abs(f(n/10)-n%10))/2; }

int main(){

int t[7]={1,2,3,4,5,6,7};

for(int i=0;i<7;i++){

        cout<<t[i];

}

cout<<endl;
bool flaga =true;

for(int i=6 ;i>0 & flaga;i--){
        flaga=false;
    for(int j=0;j<i;j++)
    {
        if(t[j]>t[j+1]){swap(t[j],t[j+1]);
        flaga=true;}
    }
}


cout<<endl;
for(int i = 0 ;i<7;i++){

        cout<<t[i];

}

}
