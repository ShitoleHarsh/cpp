#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class A
{
public:
	void funA()
	{
	cout<<"Enter the base class";
	cout<<endl;
	}
};
class B:public A
{
public:
	void funB()
	{
	cout<<"Derived class B"<<endl;
	cout<<endl;
	
	}

};
class C:public A
{
public:
	void func()
	{
		cout<<"Derived class c"<<endl;
		cout<<endl;
	}

};
void main()
{
	C obj;
	obj.funA();
	obj.func();
	getch();
}