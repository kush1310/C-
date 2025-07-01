#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int a,b;
	int temp;
	cout<<"PLEASE ENTER THE VALUE OF A:";
	cin>>a;
	cout<<"PLEASE ENTER THE VALUE OF B:";
	cin>>b;
	cout<<"BEFORE SWAPPING THE VALUE OF A AND B IS:";
	cout<<a<<b;
	a=b;
	b=temp;
	temp=a;
	cout<<"AFTER SWAPPING THE VALUE OF A AND B IS:";
	cout<<a;
	cout<<b;
	getch();
	return 0;
}

