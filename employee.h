#include<iostream>
#include<conio.h>
using namespace std;

class employee
{
private:int roll;
		int age;
		int stdid;
public:
	void input();
	void display();
};
void employee::input()
{
	cout<<"Enter roll no"<<"Enter age"<<"Enter stdid"<<endl;
	cin>>roll>>age>>stdid;

}
void employee::display()
{
	cout<<"Roll no is"<<roll<<"Age is"<<age<<"Stdid is "<<stdid<<endl;

}





