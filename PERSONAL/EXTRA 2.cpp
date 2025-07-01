#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
void display (int);
void display (float);
int main()
{
 	int a;
 	float b;
 	cout<<"ENTER THE INTEGER VALUE:"<<endl;
 	cin>>a;
 	display(a); 
 	cout<<"ENTER THE FLOAT VALUE:"<<endl;
 	cin>>b;
	display(b); 
 	return 0;
}
void display (int x)
{
	cout<<"INTEGER VALUE="<<x<<endl;
}
void display (float y)
{
	cout<<"FLOAT VALUE"<<y<<endl;
}