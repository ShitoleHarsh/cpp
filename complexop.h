#include<iostream>
#include<conio.h>
using namespace std;
class complex
{
private:
	int real;
	int imag;
public:
	complex()// default c'tor
	{
		real=0;
		imag=0;
	}
	complex(int r,int i)//parameterized c'tor
	{
		this->real=r;
		this->imag=i;
	}
	complex operator+(complex &c)//function to add two complex no.
	{
	complex temp;
	temp.real=this->real+c.real;
	temp.imag=this->imag+c.imag;
	return(temp);
	}
	complex operator-(complex &c)//function to substract two complex no.
	{
	complex temp;
	temp.real=this->real-c.real;
	temp.imag=this->imag-c.imag;
	return(temp);
	}
	complex operator++(int)//fun to pre increment
	{
		complex temp=*this;
		++this->real;
		++this->imag;
		return(*this);
	}
	complex operator--(int)//fun to decrement
	{
		complex temp=*this;
		--this->real;
		--this->imag;
		return(*this);
	}
	void display()
	{
	cout<<real<<"+"<<imag<<"i"<<endl;
	}
};