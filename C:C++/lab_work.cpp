#include<iostream>
#include<string>
using namespace std;

struct Student
{
char name[20];
int roll;
float marks;

void getStudentData()
{
    cout<<"Enter name : ";
    cin>>ws;
    cin.getline(name,sizeof(name));
    cout<<"Enter roll no. - ";
    cin>>roll;
    cout<<"Enter marks : ";
    cin>>marks;
}

void setStudentData()
{
    cout<<"Name - "<<name<<" ";
    cout<<"Roll No. - "<<roll<<" ";
    cout<<"Marks - "<<marks<<" ";
}
};
int main()
{
    Student s[3];
    int i;
    for(i=0;i<3;i++)
    s[i].getStudentData();

    for(i=0;i<3;i++)
    {
        s[i].setStudentData();
        cout<<endl;
    }
return 0;
}