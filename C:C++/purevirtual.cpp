#include<iostream>
using namespace std;
class number
{
    protected: int v;
    public: void setv(int i)
    {
        v=i;
    }
    virtual void show()=0;
};
class hextype:public number
{
    public: void show()
    {
        cout<<hex<<v<<"\n";
    }
};
class dectype:public number
{
    public: void show()
    {
        cout<<v<<"\n";
    }
};
class octtype:public number
{
    public: void show()
    {
        cout<<oct<<v<<"\n";
    }
};
int main()
{
    dectype d;
    hextype h;
    octtype o;
    d.setv(20);
    d.show();
    h.setv(20);
    h.show();
    o.setv(20);
    o.show();
    return 0;
}