#include<iostream>
#include<conio.h>
using namespace std;
void function(int &id)
{
	id=10;
	cout<<"The id is" <<id<<endl;
}


void main()
{
	int empid=1;
	function(empid);
	getch();
}