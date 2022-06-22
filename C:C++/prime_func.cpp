#include<iostream>
using namespace std;
int prime(int);
int main()
{
    int a;
    cout<<"Enter two numbers : ";
    cin>>a;
    prime(a);
}
int prime(int a)
{
    int i,flag=0;
    for (i=2;i<a;i++)
    {
        if (a%i==0)
        {
            flag = 1;
        }
    }
    if (flag==0)
    cout<<"Number is prime";
    else
    cout<<"nn ";
}