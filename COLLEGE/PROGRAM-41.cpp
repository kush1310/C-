#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	int p=15,r,t;
	float si;
	cout<<"ENTER THE VALUE OF PERCENTAGE OF INTEREST:"<<endl;
	cin>>p;
	cout<<"ENTER THE VALUE OF RATE(PRICE):"<<endl;
	cin>>r;
	cout<<"ENTER THE VALUE OF TIME(IN DAYS):"<<endl;
	cin>>t;
	si=(p*r*t)/100;
	cout<<"TOTAL SIMPLE INTEREST="<<si;
	getch();
	return 0;
}
