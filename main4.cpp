#include<iostream>
#include<math.h>
#include<conio.h>
#include<graphics.h>

using namespace std;
class rec{
    float xco,yco;
    public:
    rec(){xco=0;yco=0;}
    rec(float x, float y){xco=x;yco=y;}
    void display(){cout<<xco<<","<<yco;}
};
class pol{
    float r,ang;
    public:
    pol(){r=0;ang=0;}
    pol(float ra,float a){r=ra;ang=a;}
    operator rec(){
        float x,y;
        x=r*cos(ang);
        y=r*sin(ang);
        return rec(x,y);
    }
};
int main(int argc, char const *argv[])
{ pol p(10,1);
rec r;
    r=p;
    r.display();
    getch();
    return 0;
}
