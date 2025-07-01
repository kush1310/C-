#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class code
{
	private:
	int r,i;
	public:
	void read();
	void print();
};
inline void code::read()
	{
		cout<<"ENTER A REAL AND IMAGINARY VALUE:";
		cin>>r>>i;
	}
inline void code::print()
	{
		cout<<endl<<"ENTERED VALUE ARE:"<<endl;
		cout<<r<<endl;
		cout<<i<<endl;
	}
int main()
{
	code ob;
	ob.read();
	ob.print();
	getch();
	return 0;
}
