#include<iostream>
using namespace std;
struct date
{
    int dd,mm,yy;
};
struct employee
{
    int empid;
    char empdept[20];
    struct date empdoj;
};
int main()
{
    struct employee e1;
    cout<<"\n Enter employee details: ";
    cin>>e1.empid>>e1.empdept>>e1.empdoj.dd>>e1.empdoj.mm>>e1.empdoj.yy;
    cout<<"\n Details of employees are : ";
    cout<<e1.empid<<" "<<e1.empdept<<" "<<e1.empdoj.dd<<" "<<e1.empdoj.mm<<" "<<e1.empdoj.yy;
    return 0;
}