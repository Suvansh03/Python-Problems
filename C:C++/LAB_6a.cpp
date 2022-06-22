#include<iostream>
#include<math.h>
using namespace std;
class area
{
    public:
    void func(int b,int h)
    {
        double ans=(0.5*b*h);
        cout<<"Area of right triangle is "<<ans<<endl;
    }

    void func(int side)
    {
        long double an=(0.43301270189*side*side);
        cout<<"Area of equilateral triangle is "<<an<<endl;
    }

    void func(float a,int b,int c)
    {
        float s=(float)((a+b+c)/2);
        //cout<<s<<endl;
        float anss=(float)(sqrt(s*(s-a)*(s-b)*(s-c)));
        cout<<"Area of triangle is "<<anss<<endl;
    }
};
int main()
{
    area obj;
    obj.func(4,5);
    obj.func(50);
    obj.func(6.8,7,8);

    return 0;
}