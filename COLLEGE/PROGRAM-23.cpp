//SETBASE EXAMPLE
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	cout<<setbase(16);
	cout<<110<<endl;
	cout<<setbase(10);
	cout<<110<<endl;
	cout<<setbase(8);
	cout<<110<<endl;
	getch();
	return 0;
}
