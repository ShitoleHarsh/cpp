#include"complexop.h"
void main()
{
complex c1(1,2),c2(3,4);
complex c3;
c3=c1.operator+(c2);//c3=c1+c2
cout<<"Adittion of two complex using objects:"<<endl;
c3.display();
complex c4;
c4=c1.operator-(c2);//c4=c1-c2
cout<<"\n substraction of two complex no:"<<endl;
c4.display();
c1++;
cout<<"\n incrementing the complex no:"<<endl;
c1.display();
c2--;
cout<<"\n decrementing the complex no:"<<endl;
c2.display();
getch();
}