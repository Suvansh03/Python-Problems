#include<iostream>
using namespace std;
int main()
{
    int a,i=0,j=1,fib=0;
    cout<<"Enter the number - ";
    cin>>a;

    while (i<a)
    {
        i=j;
        j=fib;
        fib=i+j;

        cout<<" "<<fib;
    }
    return 0;
}