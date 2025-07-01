#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class number
{
	static int num;
	public:
		void getdata()
		{
			cout<<"PLEASE ENTER YOUR NUMBER:"<<endl;
			cin>>num;
		}
		void disdata()
		{
			cout<<"NUMBER="<<num<<endl;
		}
};
int number::num;
int main()
{
	number a,b,c;
	
	a.disdata();
	a.disdata();
	
	a.getdata();
	a.getdata();
	
	a.disdata();
	a.disdata();
	getch();
	return 0;
}
