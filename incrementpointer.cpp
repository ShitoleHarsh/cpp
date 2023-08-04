#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int num=20;
	int *ptr=&num;
	cout<<"The num value is\n"<<num<<endl;
	cout<<"The pointer value is \n"<<*ptr<<endl;
	num++;
	cout<<"The num value is \n"<<num<<endl;
	cout<<"The pointer value is\n"<<*ptr<<endl;
	getch();
}