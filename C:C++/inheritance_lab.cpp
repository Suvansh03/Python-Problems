#include<iostream>
using namespace std;
class student{
    public:
    int roll_no;
    char name[20];
    
    void getdata(){
        cout<<"Enter student roll number: ";
        cin>>roll_no;
        cout<<"Enter name of the student: ";
        cin>>name;
    }
};
class marks:public student{
    public:
    int sub1,sub2;
    
    void getmarks(){
        cout<<"Enter the marks of subject 1: ";
        cin>>sub1;
        cout<<"Enter the marks of subject 2: ";
        cin>>sub2;
    }
};
class result:public marks{
    public:
    int total_m;
    string result;
    
    void calculate_result(){
        total_m=sub1+sub2;
        if(total_m>=60)
        result="PASSED";
        else
        result="FAILED";

        //cout<<"Roll no   Name     Sub1    Sub2    Total marks   Result"<<endl;
    }
    void display_result(){
        
        cout<<roll_no<<"        "<<name<<"   "<<sub1<<"   "<<sub2<<"   "<<total_m<<"   "<<result<<endl;
    }
};
int main(){
    result r1,r2;
    r1.getdata();
    r1.getmarks();
    r1.calculate_result();
    r2.getdata();
    r2.getmarks();
    r2.calculate_result();
    cout<<"Roll    Name     Sub1    Sub2    Total marks   Result"<<endl;
    r1.display_result();
    r2.display_result();

    return 0;
    
}