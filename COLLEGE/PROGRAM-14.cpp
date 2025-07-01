#include<iostream>
using namespace std;
int a=50;
int main()
{
	int a=100;
	{
		int a=200;
		cout<<"VALUE OF::A="<<::a<<endl;
		cout<<"VALUE OF A="<<a<<endl;
	}
		cout<<"VALUE OF A="<<a<<endl;
	return 0;
}

