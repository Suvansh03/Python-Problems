#include<iostream>
using namespace std;

class rectangle
{
    private:
    int len,brd;
    char color[20];

    public:
    
    void setdata()
    {
        cout<<"Enter length and breadth of rectangle: ";
        cin>>len>>brd;
        cout<<"Enter color : ";
        cin>>color;
    }
};
class triangle 
{
    private:
    int l1,l2,l3;
    char color[20];

    public:
    void setdata(int s1,int s2,int s3)
    {
        l1=s1;
        l2=s2;
        l3=s3;
    }

    triangle()
    {
        color='Green';
    }
};
