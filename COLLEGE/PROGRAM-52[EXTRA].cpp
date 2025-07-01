#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class addition
{
	int a,b,sum=0;
	public:

	void add()
	{
		sum=a+b;
		cout<<"ADDITION OF A AND B:"<<sum;
	}
};
int main()
{
	int a,b;
	addition ob;
	cout<<"PLEASE ENTER VALUE OF A:"<<endl;
	cin>>a;
	cout<<"PLEASE ENTER VALUE OF B:"<<endl;
	cin>>b;	
	ob.add();
	getch();
	return 0;
}
