#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
inline int add(int a, int b=110)
{
	return a+b;
}
int main()
{
	int a,b;
	cout<<"ENTER THE VALUE OF A AND B "<<endl;
	cin>>a>>b;
	cout<<"SUM="<<add(a);
	getch();
	return 0;
}
