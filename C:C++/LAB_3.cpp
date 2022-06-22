#include<iostream>
using namespace std;
class Complex
{
    public:
    int real,imag;

    Complex()
    {
        cout<<"Default contructor called"<<endl;
    }

    Complex(int a,int b)
    {
        real=a;
        imag=b;
        cout<<"Parametrised constructor called"<<endl;
        cout<<real<<" + "<<imag<<"i"<<endl;
    }

    Complex(int w)
    {
        cout<<"Single argument"<<endl;
    }

    Complex(Complex &c)
    {
        int real=c.real;
        int imag=c.imag;
        cout<<"Copy constructor"<<endl;
        cout<<imag<<" + "<<real<<"i"<<endl;
    }

};
int main()
{
    Complex C1;
    Complex C2(10,20);
    Complex C3(5);
    Complex C4=C2;

    return 0;
}