#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;
int main()
{
	int num;
	cout<<"ENTER THE NUMBER:"<<endl;
	cin>>num;
	bool count;
	
	for(int i=2;i<=sqrt(num);i++)
	{
		if(num%i==0)
		{
			cout<<"THE NUMBER IS NOT A PRIME"<<endl;
			count=1;
			break;
		}
	}
	if(count==0)
	{
		cout<<"THE NUMBER IS PRIME"<<endl;
	}
		return 0;
}