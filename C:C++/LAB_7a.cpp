#include<iostream>
using namespace std;
class test
{
    int a;
    public:
    test(int x){
        a=x;
    }

    void show(){
        cout<<"Variable value : "<<a;
    }

    test operator ++(){
        a=a+4;
        return a;
    }
};
int main()
{
    test t(8);
    ++t;
    t.show();

    return 0;
}