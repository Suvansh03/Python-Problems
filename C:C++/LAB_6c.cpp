#include<iostream>
#include<math.h>
using namespace std;

class polygon{
    public:
    int wid,hei;

    void set_value(int x,int y){
        wid=x;
        hei=y;
    }
};

class rectangle : public polygon{
    public:
    void calculate_area(int q,int w)
    {
        int area=0;
        area=(q*w);
        cout<<"Area of rectangle is "<<area<<endl;
    }
};

class triangle : public polygon{
    public:
    void calculate_area(int p,int o,int i)
    {
        float s=(float)((p+o+i)/2);
        cout<<s<<endl;
        float anss=(float)(sqrt(s*(s-p)*(s-o)*(s-i)));
        cout<<"Area of triangle is "<<anss<<endl;
    }
};
int main()
{
    polygon *bptr;
    rectangle r;
    //triangle t;

    bptr= &r;

    //r.set_value();
    r.calculate_area(6,8);

    return 0;

}