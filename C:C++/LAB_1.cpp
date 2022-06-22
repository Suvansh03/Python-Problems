#include<iostream>
using namespace std;
class account
{
    public:
    string name;
    int ac_no,bal,add,minus;
    
    void input()
    {
        cout<<"Enter the name of depositor : ";
        cin>>name;
        cout<<"Enter account number : ";
        cin>>ac_no;
        cout<<"Enter Bank balance : ";
        cin>>bal;
    }

    void operate()
    {
        cout<<"Enter money to be deposited : ";
        cin>>add;
        bal=bal+add;
        cout<<"Enter money to be withdrawn : ";
        cin>>minus;
        if (minus<bal)
        {
            bal=bal-minus;
            cout<<"Money withdrawn"<<endl;
        }
        else
        cout<<"Not enough balance"<<endl;
    }

    void getdata(string n,int no)
    {
        name=n;
        ac_no=no;
    }

    void display()
    {
        cout<<"Depositor name : "<<name<<endl<<"Account number : "<<ac_no<<endl<<"Updated balance : "<<bal<<endl;
    }
};
int main()
{
    account a1,a2;
    //a2.getdata("John",11223344);
    //a2.display();
    a1.input();
    a1.operate();
    a1.display();

    return 0
}