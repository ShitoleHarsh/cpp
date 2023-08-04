#include<iostream>
#include<conio.h>
using namespace std;
class cdate
{
private:int mday;
		int mmonth;
		int myear;//data members
public:
	cdate()//default c'tor
	{
		mday=1;
		mmonth=2;
		myear=2000;
	}
	cdate(int d,int m,int y)//param c'tor
	{
		mday=d;
		mmonth=m;
		myear=y;
	}
	void display();

};


void cdate::display()
{
	cout<<"Date is:";
	cout<<mday<<"/"<<mmonth<<"/"<<myear<<endl;
}