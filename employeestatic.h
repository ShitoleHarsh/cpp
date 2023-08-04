#include<iostream>
#include<conio.h>
using namespace std;
class employee
{
private:  int empid;
		  char empname [25];
		  char organization[25];
		  static int count;
public:	employee()
		{
			empid=1;
			strcpy(empname,"Ravan");
			strcpy(organization,"lanka");
		}
		employee(int id,char*name,char*org)
		{
			empid=id;
			strcpy(empname,name);
			strcpy(organization,org);
		}
		void display()
		{
		cout<<"emp id is:"<<empid<<endl;
		cout<<"emp name is:"<<empname<<endl;
		cout<<"orgnization name is:"<<organization<<endl;
		count++;
		}
		static void showcount()
		{
			cout<<"Total employees are"<<count<<endl;
		}
};
		