#include<iostream>
#include<conio.h>
#include"cdate.h"
using namespace std;

class car
{
private:
	char carname[20];
	int  chessisno;
	char model[25];
	cdate purdate;
public:
	car()//default c'tor
    {
	 strcpy(carname,"AUDI");
	 int chassisno=152036;
	 strcpy(model,"Q Seven");
	}
	car(char *a,int c,char*m,int dd,int mm,int yy)//parameterized c'tor
	{
	 strcpy(carname, a);
	 chessisno=c;
	 strcpy(model,m);
	 purdate=cdate(dd,mm,yy);
	}
	void display()
	{
	cout<<"car name is:"<<carname<<endl;
	cout<<"chessis no is:"<<chessisno<<endl;
	cout<<"model name is:"<<model<<endl;
	purdate.display();
	}

};