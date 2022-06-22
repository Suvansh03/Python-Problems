#include<iostream>
using namespace std;
int main()
{
    int m,n,sum=0,i,j;
    int a[m][n];
    cout<<"Enter the number of rows and columns - ";
    cin>>m>>n;
    cout<<"Enter elements of Array - \n";
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=m;j++)
        {
            cin>>a[i][j];
        }
    }
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=m;j++)
        {
            cout<<"Array is\n"<<a[i][j]<<" ";
        }
        cout<<"\n";
    }
    for (i=0;i<=n;i++)
    {
        for (j=0;j<=m;j++)
        {
            sum=sum+a[i][j];
        }
    }
    cout<<"Sum of elements of array is - "<<sum;

        return 0;
}