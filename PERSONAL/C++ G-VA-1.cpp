#include<iostream>
using namespace std;
int c=34;
main()
{
	int a,b,c;

	cout<<"ENTER THE VALUE OF A:"<<endl;
	cin>>a;
	
	cout<<"ENTER THE VALUE OF B:"<<endl;
	cin>>b;
	
	c=a+b+14;

	cout<<"THE MODIFIED VALUE OF C= "<<c<<endl;
	cout<<"THE GLOBAL VALUE OF C= "<<::c;	
}