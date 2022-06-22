#include<iostream>
using namespace std;

class Calculator
{
    public:
    float x,y,sum,diff;

    void setValues(float a, float b)
    {
        x=a;
        y=b;
    }

    void abSum()
    {
        sum=x+y;
    }

    void abDiff()
    {
        diff=x-y;
    }

    void getValues()
    {
        cout<<"Sum is "<<sum<<endl;
        cout<<"Difference is "<<diff<<endl;
    }

};
int main()
{
    Calculator c[3];
    int i;
    
    c[0].setValues(7,8);
    c[1].setValues(33,66);
    c[2].setValues(54,21);

    for (i=0;i<3;i++)
    {
        c[i].abSum();
        c[i].abDiff();
        c[i].getValues();
    }
    return 0;
}