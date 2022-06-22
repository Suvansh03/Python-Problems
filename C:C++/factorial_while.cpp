#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number : ";
    cin>>a;
    int fact=1;
    int i=1;
    while (i<=a)
    {
        fact=fact*i;
        i++;
    }
    cout<<"Factorial = "<<fact;
    return 0;
}