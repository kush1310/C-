#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class number
{
	static int num;
	public:
	void data()
	{
		cout<<"ENTER NUMBER:";
 		cin>>num;
	}
	void display()
	{
		cout<<"NUMBER="<<num<<endl;
	}
};
int number::num;
int main()
{
	number a,b,c;
	a.display();
	b.display();
	c.display();
	a.data();
	a.data();
	a.data();
	cout<<"AFTER ENTERING THE VALUE:"<<endl;
	a.display();
	b.display();
	c.display();
 	return 0;
}