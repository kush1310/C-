#include<iostream>
using namespace std;
int num()
{
	int a,b,c;
	float x;
	cout<<"ENTER VALUE OF A:"<<endl;
	cin>>a;
	cout<<"ENTER VALUE OF B:"<<endl;
	cin>>b;
	cout<<"ENTER VALUE OF C:"<<endl;
	cin>>c;
	x=a/(b-c);
	return x;
}
main()
{
	int a,b,c;
	cout<<"CALCULATION OF THE GIVEN THREE NUMBERS IS:"<<num();
}