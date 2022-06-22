#include<iostream>
using namespace std;
class Base
{
    protected: int i;
    public:
    Base(int a)
    {
        i=a;
    }
    void baseShow()
    {
        cout<<"i="<<i<<endl;
    }
};
class Child : public Base
{
    int j;
    public: Child(int a, int b) : Base(a) {j=b;}
    void childShow(){cout<<"i="<<i<<",j="<<j<<endl;}
};
int main(void) 
{
    Base b(55); 
    b.baseShow();
    Child c(10,20); 
    c.childShow();

    return 0;
}