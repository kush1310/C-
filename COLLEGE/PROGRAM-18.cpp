//PRECISION EXAMPLE
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	float a=314.156896;
	cout<<"VALUE BEFORE PRECISION IS:"<<a<<endl;
	cout.precision(6);
	cout<<"\nVALUE AFTER PRECISION IS:"<<a;
	getch();
	return 0;
}

