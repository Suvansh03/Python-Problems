#include <iostream>
using namespace std;
int main()
{
    int array[100], position, c, n, value;
    cout<<"Enter number of elements in array : ";
    cin>>n;
    cout<<"Enter elements"<<endl;
    for (c = 0; c < n; c++)
    {
        cin>>array[c];
    }
    cout<<"Enter the location where you wish to insert an element"<<endl;
    cin>>position;
    cout<<"Enter the value to insert"<<endl;
    cin>>value;
    for (c =(n-1) ; c >= (position-1) ; c--)
    {
        array[c+1] = array[c];
    }
	array[position-1] = value;
    cout<<"Resultant array is"<<endl;
    for (c = 0; c <= n; c++)
    {
        cout<<" "<<array[c]; 
    }
   return 0;
}