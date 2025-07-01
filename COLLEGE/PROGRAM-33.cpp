#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
void num(int a, float b)
{
	cout<<"\nINTEGER NUMBER IS:"<<a<<endl;
	cout<<"FLOAT NUMBER IS:"<<b<<endl;
}
int main()
{
	int num1=13;
	double num2=5.8;
	num(num1,num2);
	getch();
	return 0;
}

