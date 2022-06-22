#include<iostream>
using namespace std;
class complex
{
    public:
    int real,imag;

    void getdata()
{
    cout<<"Enter real part - " <<endl;
    cin>>real;
    cout<<"Enter imag part - " <<endl;
    cin>>imag;
}
    void input(int r,int i)
{
    real = r;
    imag = i;
}
void display()
{
    cout<<"complex no : "<<real<<"+"<<imag<<"i"<<endl;
}
};
int main()
{
    complex c1,c2;
    c1.input(1,2);
    c2.getdata();
    c1.display();
    c2.display();
    
    return 0;
}
