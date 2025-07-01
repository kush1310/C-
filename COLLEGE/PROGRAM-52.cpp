#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class code
{
	int tot;
	public:
	void printmsg()
	{
		cout<<"SUM=";
	}
	void sum(int a, int b)
	{
		tot=a+b;
		cout<<"TOTAL="<<tot;
	}
};
int main()
{
	code ob;
	ob.printmsg();
	ob.sum(1,10);
	getch();
	return 0;
}

