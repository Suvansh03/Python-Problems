#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter Marks \n";
    cout<<"Physics - ";
    cin>>a;
    cout<<"Maths - ";
    cin>>b;
    cout<<"Chemistry - ";
    cin>>c;
    float x;
    x=(float)(a+b+c)/3;
    cout<<"Average marks : "<<x;
    if (x>70)
    cout<<"\n A grade";
    else if (x>60 && x<=70)
    cout<<"\n B grade";
    else if (x>50 && x<=60)
    cout<<"\n C grade";
    else if (x>40 && x<=50)
    cout<<"\n D grade";
    else if (x<=40)
    cout<<"\n Fail";

    return 0;


}