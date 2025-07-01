#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
void cal(int);
void cal(int,int);
void cal(float,float,float);

void cal(int a)
{
	a+=10;
	cout<<"ADDITION OF X TO X="<<a<<endl;	
}
void cal(int a, int b)
{
	a=a*b;
	cout<<"MULTIPLICATION OF Y AND Z="<<a<<endl;
}
void cal(float a,float b,float c)
{
	a=(a*b)/c;
	cout<<"DIVISION OF A+B TO C="<<a<<endl;
}
int main()
{
	int x,y,z;
	float a,b,c;
	cout<<"ENTER THE VALUE OF X:"<<endl;
	cin>>x;
	cout<<"ENTER THE VALUE OF Y:"<<endl;
	cin>>y;
	cout<<"ENTER THE VALUE OF Z:"<<endl;
	cin>>z;
	cout<<"ENTER THE VALUE OF A:"<<endl;
	cin>>a;
	cout<<"ENTER THE VALUE OF B:"<<endl;
	cin>>b;
	cout<<"ENTER THE VALUE OF C:"<<endl;
	cin>>c;
	
	cal(x);
	cal(y,z);
	cal(a,b,c);
	
	getch();
	return 0;
}

