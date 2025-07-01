#include<iostream>
using namespace std;
int avg(int a,int b)
{
	int ans;
	ans=(a+b)/2;
	return ans;
}
main()
{
	int a,b,ans;
	cout<<"ENTER VALUE OF A:"<<endl;
	cout<<"ENTER VALUE OF B:"<<endl;
	cin>>a;
	cin>>b;
	cout<<"AVERAGE OF THE GIVEN TWO NUMBERS IS:"<<avg(a,b);
}