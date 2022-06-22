#include<iostream>
using namespace std;
class Student
{
    public:
    string name;
    int roll_no;

    void input(string n,int r)
    {
        name = n;
        roll_no = r;
    }
    void display()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Roll no : "<<roll_no<<endl;
    }
};
int main()
{
    Student s1;
    s1.input("John",23);
    s1.display();

    return 0;
}