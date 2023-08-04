#include<iostream>
#include<conio.h>
using namespace std;
inline int square(int n)
{
	return(n*n);

}
void main()
	{
	int x,res;
	cout<<"Enter the value of x is"<<endl;
	cin>>x;
	res=square(x);
	cout<<"The square of x is\n"<<res<<endl;
	getch();
	}