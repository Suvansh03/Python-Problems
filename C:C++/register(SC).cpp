#include<iostream>
using namespace std;
int main()
{
    register int i,s;
    for (i=1;i<=10;i++)
    {
        s=i*i;
        cout<<"\nSquare of "<<i<<" = "<<s;
    }
    return 0;
}