#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class circle
{
	int r;
	float area;
	public:
	void data()
	{
		cout<<"ENTER VALUE OF RADIUS:";
		cin>>r;
	}
	void count()
	{
		area=3.14*r*r;
		cout<<"AREA OF CIRCLE:"<<area;
	}
};
int main()
{
	circle ob;
	ob.data();
	ob.count();
	getch();
	return 0;
}
