#include<iostream>
#include<conio.h>
using namespace std;
class Book
{
private:int bookid;
		int price;
		static char publisher[10];
		static int count;
public:
		Book()//default c tor
		{
			bookid=10;
			price=550.15;
			strcpy(publisher,"Nirali");  
		}
		Book(int id,float p)
		{
			bookid=id;
			price=p;
			strcpy(publisher,"Nirali");
		}
		static void showcount()
		{
		
			cout<<"NO of books"<<count<<endl;
		}
		void display()
		{
			cout<<"book id is:"<<bookid<<"price is:"<<price<<"publisher is:"<<publisher<<endl; 
		}
};
   int Book::count=0;
   char Book::publisher[];

   void main()
   {
	   Book objb1,objb2(20,542.1);
	   objb1.display();
	   Book::showcount();
	   objb2.display();
	   objb2.showcount();
	   getch();
   }