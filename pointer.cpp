#include<iostream>
#include<conio.h>
using namespace std;
void main()
{
	int num1=10,num2=20;
	int *ptr=&num1;// pointer is pointing towards num 1
	cout<<*ptr<<endl;//dereferencing the pointer
	 ptr=&num2;// pointer is pointing towards num 2
	cout<<*ptr<<endl;
	getch();



}