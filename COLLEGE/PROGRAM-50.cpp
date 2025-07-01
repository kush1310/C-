#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
struct
{
	string name;
	string model;
	string owner;
	string number;
	int year;
}car1,car2;
int main()
{
	car1.name="TOYOTA SUPRA";
	car1.model="KS13";
	car1.year=2023;
	car1.owner="KUSH SHAH";
	car1.number="GJ"07"AKN"314;
	
	car2.name="MUSTANG";
	car2.model="KS10";
	car2.year=2023;
	car2.owner="KUSH SHAH";
	car2.number="GJ"07"AKN"303;
	
	cout<<"DETAILS OF CAR-01:-"<<endl;
	cout<<car1.name<<" "<<car1.model<<"-"<<car1.year<<endl<<endl;
	
	cout<<"DETAILS OF CAR-02:-"<<endl;
	cout<<car2.name<<" "<<car2.model<<"-"<<car2.year<<endl<<endl;
	
	getch();
	return 0;
}
