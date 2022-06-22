#include<iostream>
using namespace std;
int main()
{
    ofstream out("student.txt");
    if(!out)
    {
        cout<<"Cannot open file.\n";
        exit(0);
    }
    out<<"Abhishek "<<90.50<<"\n";
    out<<"Ashok"<<81.50<<"\n";
    out<<"Ravi"<<69.80<<"\n";
    out.close(); 
    
    ifstream in("student.txt");
    if(!in)
    {
        cout<<"Cannot open file. \n";
        exit(0);
    }
    char Name[20];
    float percentage;
    in>>Name>>percentage;
    cout<<Name<<" "<<percentage<<"\n";
    in>>Name>>percentage;
    cout<<Name<<" "<<percentage<<"\n";
    in>>Name>>percentage;
    cout<<Name<<" "<<percentage<<"\n";
    in.close();
    return 0;
}
