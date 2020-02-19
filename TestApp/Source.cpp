#include<iostream>
using namespace std;

class Base
{
	int value;
	int data;
public:
	virtual void fn()
	{
		cout << "Fn of Base" << endl;
	}

	virtual void xn()
	{
		cout << "Xn of Base" << endl;
	}

	void mn()
	{
		cout << "Mn of Base" << endl;
	}
};

class Derived : public Base
{
	int dData;
public : 
	void fn()
	{
		cout << "Fn of Derived ********" << endl;
	}
};



void main()
{
	
	Base* ptr = new Base;

	ptr->fn(); 

	ptr->xn();

	cout << sizeof(*ptr);

	cout << "******************** " << endl;


}