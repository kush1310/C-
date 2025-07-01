#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
bool Prime_num(int num)
{
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
		 	return false;
		}
	}
	 	 	return true;
}
int main()
{
 	int a,b;
	cout<<"ENTER VALUES OF A:";
	cin>>a;
	cout<<"ENTER VALUES OF B:";
	cin>>b;
	
	for(int i=a;i<=b;i++)
	{
		if(Prime_num(i))
		{
		 	cout<<i<<endl;
		}				
	}
 	return 0;
}