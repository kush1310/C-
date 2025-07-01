#include<iostream>
#include<iomanip>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee
{	
	public:
	string name;
	int id;
	int contact;
	public:
void getdata()
{
		cout<<"NAME"<<endl;
		cin>>name;
		cout<<"ID"<<endl;
		cin>>id;
		cout<<"CONTACT NUMBER"<<endl;
		cin>>contact;
}
void display()
{
	cout<<" NAME:"<<name<<endl<<endl;
	cout<<" ID:"<<id<<endl<<endl;
	cout<<"CONTACT NUMBER:"<<contact<<endl<<endl;
}
};
int main()
{
	Employee m[3],w[5];
	int i,y;
	cout<<"DETAILS OF MANAGERS"<<endl<<endl;
	for(i=0;i<3;i++) 
	{
		m[i].getdata();
		m[i].display();
	}
	cout<<"DETAILS OF WORKERS"<<endl<<endl;
	for(y=0;y<5;y++) 
	{
		w[i].getdata();
		w[i].display();
	}
	getch();
	return 0;
}
