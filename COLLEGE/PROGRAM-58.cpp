#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;
class bank
{
	private:
	long long int acc_no;
	string hold_name;
	long long int acc_balance;
	string acc_type;
	
	public:
		void getdata();
		void disdata();
};
void bank::getdata()
{
	cout<<"ENTER ACCOUNT NUMBER"<<endl;
	cin>>acc_no;
	cout<<"ENTER ACCOUNT HOLDER NAME"<<endl;
	cin>>hold_name;
	cout<<"ENTER YOUR ACCOUNT BALANCE"<<endl;
	cin>>acc_balance;
	cout<<"ENTER YOUR ACCOUNT TYPE [CURRENT OR SAVINGS]"<<endl;
	cin>>acc_type;
}
void bank::disdata()
{
	cout<<"ENTERED INFORMATION IS SHOWDED BELOW:"<<endl<<endl;
	cout<<"KINDLY GOTHROUGH IT."<<endl<<endl;
	cout<<"ACCOUNT NUMBER"<<cout<<acc_no<<endl<<endl;
	cout<<"ACCOUNT HOLDER NAME-"<<cout<<hold_name<<endl<<endl;
	cout<<"ACCOUNT BALANCE="<<cout<<acc_balance<<endl<<endl;
	cout<<"ACCOUNT TYPE-"<<cout<<acc_type<<endl<<endl;
}
int main()
{
	bank ob;
	ob.getdata();
	ob.disdata();
	getch();
	return 0;
}
