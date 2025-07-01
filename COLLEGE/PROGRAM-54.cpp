#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class rectangle
{
	int l,b;
	public:
		void data();
		void area();
};
		void rectangle :: data()
		{
			cout<<"ENTER THE VALUE OF LENGTH:"<<endl;
			cin>>l;
			cout<<"ENTER THE VALUE OF BREADTH:"<<endl;
			cin>>b;			
		}
		void rectangle::area()
		{
			int ans;
			ans=l*b;
			cout<<"AREA OF RECTANGLE WITH GIVEN VALUES IS:"<<ans;
		}
int main()
{
	rectangle ob;
	ob.data();
	ob.area();
	getch();
	return 0;
}

