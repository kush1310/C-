#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int num,reverse=0,lastdigit;
	cout<<"ENTER THE NUMBER YOU WANT TO REVERSE:";
	cin>>num;
	while(num>0)
	{
		lastdigit=num%10;
		reverse=reverse*10+lastdigit;
		num=num/10;
	}
	 	cout<<"THE REVERSE OF GIVEN NUMBER IS:"<<reverse<<endl;
	 	return 0;
}