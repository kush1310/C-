#include<iostream>
#include<iomanip>
#include<conio.h>
#include<math.h>
using namespace std;
int power(int a)
{
	return a*a;
}
float power(float b)
{
	return b*b*b;
}
int main()
{
	int a;
	
	cout<<"ENTER THE VALUE OF A:"<<endl;
	cin>>a;

	float b;
	
	cout<<"ENTER THE VALUE OF B:"<<endl;
	cin>>b;
		
	cout<<"THE SQUARE OF GIVEN NUMBER="<<power(a)<<endl;
	
	cout<<"THE CUBE OF GIVEN NUMBER="<<power(b)<<endl;
	
	getch();
	return 0;
}
