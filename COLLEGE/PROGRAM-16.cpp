#include<iostream>
using namespace std;
main()
{
	int num;
	cout<<"ENTER THE VALUE OF A:"<<endl;
	cin>>num;
	if(num>0)
	{
		cout<<"THE NUMBER IS POSITIVE"<<endl;
	}
	else if(num<0)
	{
		cout<<"THE NUMBER IS NEGATIVE"<<endl;
	}
	else
	{
		cout<<"THE ENTERED NUMBER IS ZERO"<<endl;
	}
}
