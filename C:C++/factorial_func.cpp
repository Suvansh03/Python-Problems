#include<iostream>
using namespace std;
int factorial(int);
int main()
{
    int a;
    cout<<"Enter the Number : ";
    cin>>a;
    factorial(a);
}
int factorial(int a)
{
    int i,fact=1;
    for (i=1;i<=a;i++)
    {
        fact=i*fact;
    }
    cout<<"\nFactorial is : "<<fact;
    return 0;
}