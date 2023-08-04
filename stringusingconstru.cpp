#include"dString.h"
void main()
{
	String s1,s2("seed");
	s1.display();
	s2.display();
	
	//s1.~String();
	String s3=s2;
	s3.display();
	s3.~String();
	getch();



}