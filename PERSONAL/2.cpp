#include<iostream>
using namespace std;
class base
{
	public:
		void display()
		{
			cout<<"THIS IS BASE::...."<<endl;
		}	
};
class derive1:public base
{
	public:
		void display1()
		{
			cout<<"THIS IS DERIVE_1...."<<endl;
		}	
};
class derive2:public base
{
	public:
		void display2()
		{
			cout<<"THIS IS DERIVE_2...."<<endl;
		}	
};
main()
{
	derive2 ob1;
	derive1 ob2;.
	ob1.display();
	ob2.display1();
	ob1.display2();
}
