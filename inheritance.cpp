#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Father
{
protected:
	string surname;
public:
	void get()
	{
	cout<<"Enter the surname";
	cin>>surname;
	}
	void put()
	{
		cout<<"The surname is:"<<surname<<endl;
	}
};
class son:public Father
{
	protected:
		string name;
    public:
		void input()
		{
		cout<<"Enter the name"<<endl;
		cin>>name;
		}
		void display()
		{
		cout<<"The name is:"<<name<<surname<<endl;
		}
};
void main()
{
	son obj;
	obj.get();
	obj.put();
	obj.input();
	obj.display();
	getch();
}
