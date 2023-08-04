#include<iostream>
#include<conio.h>
using namespace std;

class complex
{
private: int real;
		 int imag;
public:
	complex()
	{
		real=0;
		imag=0;
	}
complex(int r,int i)
{
	real=r;
	imag=i;
}
void display()
{
cout<<real<<"+"<<imag<<"i"<<endl;
}

};