#include<iostream>
using namespace std;
void cal();
extern int a=20;
int main()
{
    int b,c;
    b=4;
    c=(a+b);
    cout<<"\n"<<c;
    cal();
    return 0;
}
void cal()
{
    cout<<"\n"<<a;
}