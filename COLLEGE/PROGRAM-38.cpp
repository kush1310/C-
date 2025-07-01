#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int x,y;
	void swapnum(int &a, int &b);
	cout<<"ENTER VALUE OF X:"<<endl;
	cin>>x;
	cout<<"ENTER VALUE OF Y:"<<endl;
	cin>>y;
	cout<<"BEFORE SWAPPING X="<<x<<endl;
	cout<<"BEFORE SWAPPING Y="<<y<<endl;
	swapnum(x,y);
	cout<<"AFTER SWAPPING X="<<x<<endl;
	cout<<"AFTER SWAPPING Y="<<y<<endl;
	getch();
	return 0;
}
swapnum(int &a, int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
