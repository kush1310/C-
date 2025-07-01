#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int add(int a,int b=10, int c=30)
{
	return a+b+c;
}
int main()
{
 	int a=10,b=20;
 	cout<<"ANSWER="<<add(a,b);
 	return 0;
}