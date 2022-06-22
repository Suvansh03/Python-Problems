#include<iostream>
using namespace std;
class Test{
int i;
public:
Test(int a){i=a;}
void show(){ cout<<i<<endl;}
friend void operator - (Test &x);
};
void operator-(Test &x){ x.i = -x.i;}
int main(){

Test x1(11);
-x1;
x1.show();

}