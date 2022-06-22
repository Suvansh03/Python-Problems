#include<iostream>
using namespace std;
int main()
{
    int i,j,test=0;
    for (i=2;i<=200;i++)
    {
        for (j=2;j<i;j++)
        {
            if (i%j==0)
            test = 0;
            break;
        }
        if (i==j)
        cout<<" "<<i;
    }
    return 0;
}