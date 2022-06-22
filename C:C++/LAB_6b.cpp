#include<iostream>
using namespace std;

class base {
public:
	 void print()
	{
		cout << "print base class"<<endl;
	}

	virtual void show()
	{
		cout << "show base class"<<endl;
	}
};

class derived : public base {
public:
	void print()
	{
		cout << "print derived class"<<endl;
	}

	void show()
	{
		cout << "show derived class"<<endl;
	}
};

class derived2 : public base {
public:
	void print()
	{
		cout << "print derived2 class"<<endl;
	}

	void show()
	{
		cout << "show derived2 class"<<endl;
	}


};
int main()
{
	base *bptr;
	derived d;
	//derived2 dd;
	//bptr = &dd;
	bptr = &d;

	bptr->print();
	bptr->show();

	return 0;
}

