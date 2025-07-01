#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class server
{
	private:
		int x;
	public: 
		void getinfo(int y)
		{
			x=y;
			cout<<x<<endl<<endl;
		}
};
int main()
{
	int i;
	server ob[5];
	for(i=0;i<5;i++)
	{
		ob[i].getinfo(13);
	}
	getch();
	return 0;
}
