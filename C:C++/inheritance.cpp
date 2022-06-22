#include<iostream>
using namespace std;
class Shape                   // shape class as base class
{
    public:
    int x,y;

    void get_data(int n,int m)
    {
          x = n;
          y = m;
    }
};
class Rectangle : public Shape // inherit Shape class
{
    public:
    int area_rect()
    {
        int area = x*y;
        return area;
    }
};
class Triangle : public Shape // inherit Shape class
{
    public:
    int triangle_area()
    {
        float area = 0.5*x*y;
        return area;
    }
};
class Square : public Shape // inherit Shape class
{
    public:
    int square_area()
    {
        float area = 4*x;
        return area;
    }
};
int main()
{
   Rectangle r;
   Triangle t;
   Square s;
   //area of a Rectangle
   r.get_data(5,6);
   cout << "Area of the rectangle = " <<r.area_rect()<< endl;
   //area of a triangle
   t.get_data(4,5);
   cout <<"Area of the triangle = " << t.triangle_area()<<endl;
   //area of a Square
   s.get_data(6, 6);
   cout <<"Area of the square = " << s.square_area()<<endl;
   return 0;
}