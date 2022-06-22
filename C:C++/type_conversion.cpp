#include<iostream>
using namespace std;
class CGS{
    private:
    int mts,cts;
    public:
    CGS(){
        cout<<"Default constructor called"<<endl;
    }
    CGS(int m,int c){
        mts=m;
        cts=c;
    }
    int get_mts(){
        return mts;
    }
    int get_cts(){
        return cts;
    }
    void display(){
        cout<<"Meters : "<<mts<<endl;
        cout<<"Centimeters : "<<cts<<endl;
    }
};
class FPS{
    private:
    int feet;
    float inches;
    public:
    FPS(){
        feet=0;
        inches=0;
    }
    FPS(CGS c1){
        int a;
        a=c1.get_mts()*100+c1.get_cts();
        float b=a/2.54;
        inches=(int)b%12;
        feet=b/12;
    }
    void show(){
        cout<<"Feet : "<<feet<<endl;
        cout<<"Inches : "<<inches<<endl;
    }
};
int main(){
    CGS c1(40,53);
    FPS f1(c1);
    c1.display();
    f1.show();

    return 0;
}