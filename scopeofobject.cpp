#include<iostream>
#include<conio.h>
using namespace std;
int count=0;
class cTest
{
	public:
		cTest()
		{
			count++;
			cout<<"Constructor is invokked"<<endl;
			cout<<count<<endl;
		}
		~cTest()
		{
			count--;
			cout<<count<<endl;
			cout<<"Destructor is invoked"<<endl;
		}
};
	cTest t1;//global
void main(void)
{
	cout<<"Main begins"<<endl;
	cTest t2;//local
	{
		cout<<"Block begins"<<endl;
		cTest t3;//local
		cout<<"Block ends"<<endl;
		//t3.~cTest();
	}
	
		cout<<"Main block ends"<<endl;
		getch();
};