#include <iostream>
using namespace std;

template <class T>
T myMax(T x, T y)
{
    return (x>y)? x : y;
}
int main()
{
    cout<<myMax<int>(10,20)<<endl;

    //cout<<myMax(10,3.7)<<endl; Error

    cout<<myMax('a','z')<<endl;
    cout<<myMax(-2.5,7.7)<<endl;
}