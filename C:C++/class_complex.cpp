#include<iostream>
using namespace std;

class Time
{
    public:
    int hr,min;

    void test(int h,int m)
    {
        hr=h;
        min=m;
    }

    void add1(Time t1,Time t2)
    {
        int q,r;
        hr=t1.hr + t2.hr;
        min=t1.min + t2.min;
        if (min>59)
        {
            q=min/60;
            r=min%60;
        }
        hr=hr+q;
        min=r;
    }

    void display()
    {
        cout<<"time is : "<<hr<<" H "<<min<<" M ";
    }
};
int main()
{
    Time t1,t2;
    t1.test(4,42);
    t2.test(5,56);
    t2.add1(t1,t2);
    t2.display();

    return 0;
}