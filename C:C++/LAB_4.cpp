#include<iostream>
using namespace std;

class account
{
    public:

    char name[20];
    int acc_no;
    char acc_type;
    int balance;
    int amt;
    double SI;
    int wd;

    void getdata()
    {
        cout<<"Enter name of depositor : ";
        cin>>name;
        cout<<"Enter account number : ";
        cin>>acc_no;
        cout<<"Enter account type : ";
        cin>>acc_type;
        cout<<"Enter amount to be deposited : ";
        cin>>amt;
    }
};
    class sav_acct:public account
    {
        public:

        void func()
        {
        balance=balance+amt;
        SI=(balance*8*2)/100;
        balance=SI*balance;
        cout<<"Balance is : "<<balance<<endl;
        cout<<"Enter money to be withdrawl : ";
        cin>>wd;
        balance=balance-wd;
        }
};

    class cur_acct:public account
    {
        public:

        void done()
        {
        cout<<"Provides cheque book facility";
        }
    };

int main()
{
    sav_acct s1;
    s1.getdata();
    s1.func();

    return 0;
}