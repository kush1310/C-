//SETW() EXAMPLE
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a=10;
	cout<<"NUMBER WITHOUT setw():"<<a<<endl;
	cout<<"NUMBER WITH setw():"<<setw(10)<<a<<endl;
	return 0;
}

