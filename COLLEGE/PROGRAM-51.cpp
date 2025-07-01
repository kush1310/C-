#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct
{
	string b_name;
	string a_name;
	string p_name;
	int year;
}book1,book2;
int main()
{
	book1.b_name="BOOK NAME-TOP PROGRAMMING LANGUAGES FOR SOFTWARE DEVELOPERS";
	book1.a_name="AUTHOR NAME-KUSH SHAH";
	book1.year=2023;
	book1.p_name="PUBLISHER NAME-OXFORD UNIVERSITY";
	
	
	book2.b_name="BOOK NAME-ADVANCE COMPUTER PROGRAMING";
	book2.a_name="AUTHOR NAME-KUSH SHAH";
	book2.year=2023;
	book2.p_name="PUBLISHER NAME-OXFORD UNIVERSITY";
	
	cout<<"DETAILS OF BOOK-01:-"<<endl<<endl;
	cout<<book1.b_name<<endl<<book1.a_name<<endl<<book1.year<<endl<<book1.p_name<<endl<<endl;
	
	cout<<"DETAILS OF BOOK-02:-"<<endl<<endl;
	cout<<book2.b_name<<endl<<book2.a_name<<endl<<book2.year<<endl<<book2.p_name<<endl<<endl;
	
	getch();
	return 0;
}
