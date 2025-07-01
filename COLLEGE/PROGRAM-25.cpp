#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
enum week
{
	MONDAY,TUESDAY,WEDNESDAY,THURSDAY,FRIDAY,SATURDAY,SUNDAY
};
main()
{
	week day;
	day=MONDAY;
	cout<<"MONDAY IS "<<day+1<<"st"<<" DAY OF THE WEEK";
}
