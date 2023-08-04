#include<iostream>
#include<conio.h>
using namespace std;
void swap(int a,int b);
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;

}
void main()
{
	int a=10,b=20;
	cout<<"the value of a before swap"<<a<<endl;
	cout<<"the value of b before swap"<<b<<endl;
	swap(a,b);
	cout<<"the value of a after swap"<<b<<endl;
	cout<<"the value of b after swap"<<a<<endl;
	getch();



}