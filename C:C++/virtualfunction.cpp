#include<iostream>
using namespace std;
class base
{
    public: virtual void display()
    {
        cout<<"In the base class";
    }
};
class derived: public base
{
    public: void display()
    {
        cout<<"In the derived class";
    }
};
int main()
{
    base *ptr;
    derived obj;
    ptr=&obj;
    ptr->display();
    return 0;
}