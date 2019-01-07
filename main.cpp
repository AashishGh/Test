


#include <iostream>
#include<conio.h>
using namespace std;  
class test{
    int a,b;
    public:
    	test(){};
		
     test(int x,int y){
        a=x;
        b=y;
      
    }
    test operator +(test t);
    void display(){
        cout<<a<<","<<b;
    }

};
test test::operator+(test t){
   t.a=t.a+a;
   t.b=t.b+b;
   return t;}
    
    

int main()
{test t1(10,20);
test t2(20,20);
test t3;
t3=t1+t2;
t3.display();
getch();
return 0;
}



