//WS EXAMPLE
#include<iostream>
#include<iomanip>
#include<conio.h>
#include<istream>
#include<sstream>
using namespace std;
int main()
{
	istringstream s("  KUSH HERE");
	string line;
	getline (s>>ws,line);
	cout<<"WS EXAMPLE:"<<line<<endl;
	getch();
	return 0;
}

