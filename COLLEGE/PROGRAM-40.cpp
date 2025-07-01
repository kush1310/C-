#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
int main()
{
	double num_double;	
	cout<<"ENTER THE DOUBLE VALUE"<<endl;
	cin>>num_double;
	cout<<"NUM_DOUBLE:"<<num_double<<endl;
	//C-STYLE COVERSION FROM DOUBLE TO INTEGER
	int num_int1=(int)num_double;
	cout<<"DOUBLE-TO-INTEGER VIA C STYLE="<<num_int1<<endl;
	//FUNCTION-STYLE COVERSION FROM DOUBLE TO INTEGER
	int num_int2=(int)num_double;
	cout<<"DOUBLE-TO-INTEGER VIA FUNCTION STYLE="<<num_int1<<endl;
	getch();
	return 0;
}

