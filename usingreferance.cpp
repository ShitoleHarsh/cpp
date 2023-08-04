#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int num=10;
	int &refernum = num;
	cout<<"value is\n"<<num;
	cout<<"\nvalue is\n"<<refernum;
	getch();


}