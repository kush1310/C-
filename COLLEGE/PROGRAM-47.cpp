#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
float vol(float a)
{
	return a*a*a;
}
double vol(double r, double h)
{
	return 3.14*r*r*h;
}
int main()
{
	int a;
	cout<<"ENTER THE VALUE OF SIDE OF CUBE:"<<endl;
	cin>>a;
	cout<<"VOLUME OF CUBE="<<vol(a)<<endl;
	
	int r,h;
	cout<<"ENTER THE VALUE OF LENGTH OF CYLINDER:"<<endl;
	cin>>r;
	cout<<"ENTER THE VALUE OF HEIGHT OF CYLINDER:"<<endl;
	cin>>h;
	cout<<"VOLUME OF CUBE="<<vol(r,h);
	getch();
	return 0;
}