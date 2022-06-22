#include<iostream>
using namespace std;
class factorial
{
    private: int a,f;
    public: factorial( int n)
    {
        a=n;
    }
    void calculation()
    {
        int i,f=1;
        for (i=1;i<=a;i++)
        f=(f*i);
        cout<<f<<" "<<endl;
    }
};
int main()
{
    int b;
    cin>>b;
    factorial t(b),t1(6);
    t.calculation();
    t1.calculation();     
    return 0;
}        