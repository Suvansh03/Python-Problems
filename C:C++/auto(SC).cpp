#include<iostream>
using namespace std;
int main()
{
    auto int a=10;
    {
        auto int a=20;
        {
            auto int a=30;
            cout<<a<<"\n";
        }
        cout<<a<<"\n";
    }
    cout<<a<<"\n";
    return 0;
}