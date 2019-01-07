#include <iostream>
using namespace std;
class test{
    int a;
    static int counter;
    public:

     void getdata(){
         cin>>a;
         counter++;
        
     }
     }void display(){
         cout<<a;}
         static void count(){
             cout<<counter;
         }

     }
};
int test::counter;


int main(){
    test t1,t2,t3;
    t1.getdata();
    t2.getdata();
   test::count();
    return 0;

}