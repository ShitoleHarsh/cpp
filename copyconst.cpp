#include<iostream>
#include<conio.h>
using namespace std;

class Number
{
    private: int num;

    public:
		Number()// default constructor
		{
		 num=5;
		}

	Number(int n)//parameterized constructor
	{
		num=n;
	}
	Number(Number &t)//copy constructor
	{
	num=t.num;
	}
	void display()
	{
	cout<<"Number is :"<<num<<endl; 
	}
};
 
	void main()
	{
	Number objn1,objn2(7),objn3;
	objn3=objn2;
	objn3.display();
	objn2.display();
	objn1.display();
	getch();
	}