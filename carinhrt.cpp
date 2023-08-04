#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
class Vehicle
{
protected:
	string Typeofvehicle;
public:
	void input()
	{
		cout<<"Enter the type of vehicle"<<endl;
		cin>>Typeofvehicle;
	}
};
class twowheeler:public Vehicle
{
private:
	int modelno;
	int chassisno;
public:
	void get()
	{
		cout<<"Enter the two wheeler mode and chassis"<<endl;
		cin>>modelno>>chassisno;
	}
	void display()
	{
	cout<<"The vehicle is:"<<endl;
	cout<<"Type of vehicle is:"<<Typeofvehicle<<endl;
	cout<<"Model no is:"<<modelno<<endl;
	cout<<"chassis no is:"<<chassisno<<endl;
	}
};
void main()
{
	twowheeler obj;
	obj.input();
	obj.get();
	obj.display();
	getch();


}
