#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class t
{
	int h,m,s;
	public:
		
		void gettime()
			{
				int h,m,s;
				cout<<"ENTER TIME IN HOURS:"<<endl;
				cin>>h;
				cout<<"ENTER TIME IN MINUTES:"<<endl;
				cin>>m;
				cout<<"ENTER TIME IN SECONDS:"<<endl;
				cin>>s;
			}
		void distime()
			{
				int h,m,s;
				cout<<"PLEASE VERIFY YOUR TIME:-"<<endl;
				cout<<h<<":"<<m<<":"<<s;
			}
};
int main()
{
	t ob;
	ob.gettime();
	ob.distime();
	return 0;
}
