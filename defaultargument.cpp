#include<iostream>
#include<conio.h>
using namespace std;

void defaultfun(int x,int y=5,int z=6)
{
	cout<<"value of x\n"<<x<<"\nvalue of y\n"<<y<<"\nvalue of z\n"<<z<<endl;
};
void main()
{
defaultfun(10,45,21);
getch();
};