#include<iostream>
using namespace std;

class complex{
    public:
    float x,y;
    complex(){}
    complex(float real,float imag){
        x=real;
        y=imag;
    }
    complex operator+(complex c){
        complex test;
        test.x=x+c.x;
        test.y=y+c.y;
        return test;
    }
    void display(){
        cout<<x<<" + "<<y<<"i"<<endl;
    }
};
int main(){
    complex c1,c2,c3;
    c1=complex(2.8,9.6);
    c2=complex(7.3,7.5);
    c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();

    return 0;
}