#include<iostream>
#include<conio.h>
using namespace std;
inline int cube(int n)
{
	return(n*n*n);

}
void main()
{
	int x,res;
	cout<<"Enter the value of x"<<endl;
	cin>>x;
	res=cube(x);
	cout<<"The cube of x is\n"<<res<<endl;
	getch();

}
