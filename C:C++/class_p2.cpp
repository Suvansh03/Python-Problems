#include<iostream>
using namespace std;
class Triangle
{
    public:
    int a,b,c,p;

    void perimeter()
    {
        cout<<"Enter the sides : ";
        cin>>a>>b>>c;
        p=(a+b+c);
        cout<<"Perimeter is : "<<p<<endl;
    }
};
int main()
{
    Triangle t1;
    t1.perimeter();

    return 0;
}