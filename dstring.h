#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;

class String
{
private:
		int mlen;
		char *str;
public:
		String ()
		{
			mlen=0;// default  'c'tor
			str=new char[mlen];
			strcpy(str,"Info");
		}
		String(char *str)
		{
		mlen=strlen(str);//parameterized 
		this->str=new char[mlen+1];
		strcpy(this->str,str);
		}
		String(String &obj)//copy constructor
		{
            this->mlen=obj.mlen;
			this->str=new char[obj.mlen+1];
			strcpy(this->str,obj.str);
		}
		~String()
		{
			cout<<"Destructor called"<<endl;
			if(str)
			{
			delete[] str;
			str=NULL;
			}
		}
		void display()
		{
			cout<<"string is:"<<str<<endl;
			
		}
};