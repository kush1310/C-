#include<iostream>
using namespace std;
int a=10; //GLOBAL VARIABLE
main()
{
	int a=20; //LOCAL VARIABLE
	{
		int k=a;
		int a=30;
		cout<<"INNER BLOCK="<<endl;
		cout<<"VALUE OF K="<<k<<endl;
		cout<<"VALUE OF A="<<a<<endl;
		cout<<"VALUE OF ::A="<<::a<<endl;
	}
		cout<<"OUTER BLOCK="<<endl;
		cout<<"VALUE OF A="<<a<<endl;
		cout<<"VALUE OF ::A="<<::a<<endl;
		cout<<"__________________________";
}
