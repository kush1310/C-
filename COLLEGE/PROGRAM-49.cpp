#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct student
{
	long long int roll_no;
	string name;
	string branch;
	string sem;
	int age;
	int birth;
}s1;
main()
{
	cout<<"ENTER YOUR FULL ENROLLMENT NUMBER:"<<endl<<endl;
	cout<<"ENTER YOUR NAME:"<<endl<<endl;
	cout<<"ENTER YOUR BRANCH:"<<endl<<endl;
	cout<<"ENTER YOUR SEMESTER NUMBER IN WORDS|FORMAT- SEMESTER-*:"<<endl<<endl;
	cout<<"ENTER YOUR AGE:"<<endl<<endl;
	cout<<"ENTER YOUR BIRTH DATE|FORMAT- **/**/****:"<<endl<<endl;

	cin>>s1.roll_no;
	cin>>s1.name;
	cin>>s1.branch;
	cin>>s1.sem;
	cin>>s1.age;
	cin>>s1.birth;
	
	cout<<"PLEASE VERIFY YOUR DETAILS:-"<<endl<<endl;

	cout<<s1.roll_no<<endl<<endl;
	cout<<s1.name<<endl<<endl;
	cout<<s1.branch<<endl<<endl;
	cout<<s1.sem<<endl<<endl;
	cout<<s1.age<<endl<<endl;
	cout<<s1.birth<<endl<<endl;
	getch();
}
