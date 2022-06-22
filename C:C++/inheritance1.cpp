#include<iostream>
using namespace std;
class employee
{
    public:
    int yr,sa;
    employee()
    {
        cin>>yr>>sa;
    }

};
class increment : public employee
{
    public:
    float i;
    increment()
    {
        if(sa<=0)
        cout<<"INVALID SALARY"<<endl;
        else{
        if(yr<=2016)
        i=(1.15*sa);
        else if(yr>2016 && yr<=2018)
        i=(1.1*sa);
        else
        i=(1.05*sa);

        cout<<yr<<endl<<sa<<endl<<yr<<endl<<i<<endl;
        }
    }
};
int main()
{
    increment i1;
    return 0;
}