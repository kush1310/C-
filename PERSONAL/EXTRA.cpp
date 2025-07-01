#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
inline int num(int a, int b)
{
	return a+b;
}
int main()
{
 	int x,y;
	cout<<"ENTER THE VALUE OF A AND B:";
	cin>>x>>y;
	cout<<"ANS="<<num(x,y);
 	return 0;
}