#include"employeestatic.h"
int employee::count=0;
void main()
{
	employee e1(2,"sonia","tcs"),e2,e3(3,"monya","cognizent");
	e1.showcount();
	e1.display();
	cout<<"\n";
	e1.showcount();
	e2.display();
	e2.showcount();
	e3.display();
	employee::showcount();
	getch();

}