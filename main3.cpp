#include<iostream>
#include<conio.h>

using namespace std;
template<class T>
T add(T a, T b){
    return a+b;
}
int main(){
    int i,a=10,b=200;
    float f, x=1.23,y=2.43;
    i=add(a,b);
    f=add(x,y);
    cout<<i<<"  "<<f;
    getch();
    return 0;

}