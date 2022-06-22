#include<iostream>
using namespace std;
class sample
{
    private: int a,b,c;
    public:
    sample()
    {
        a=10;
        b=20;
        cout<<"ii";
    }
    void calculation()
    {
        c=(a+b);
        cout<<c;
    }
};
int main()
{
    sample s1;
    s1.calculation();
    return 0;
}