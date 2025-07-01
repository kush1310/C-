#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class inventory
{	
	string name;
	long double num;
	float price;
	
	public:
	void getproduct()
	{
		cout<<"ENTER PRODUCT NAME:"<<endl;
		cin>>name;
		cout<<"ENTER PRODUCT'S BARCODE NUMBER:"<<endl;
		cin>>num;
		cout<<"ENTER PRICE OF THE PRODUCT:"<<endl;
		cin>>price;
	}
	void disproduct()
	{
		cout<<"THE DETAILS OF THE GIVEN PRODUCT IS DISPLAYED AS FOLLOW:"<<endl;
		cout<<"PRODUCT NAME-"<<name<<endl;
		cout<<"PRODUCT'S BARCODE NUMBER-"<<num<<endl;
		cout<<"PRODUCT'S PRICE-"<<price<<endl;
	}
};
int main()
{
	inventory ob;
	ob.getproduct();
	ob.disproduct();	
	getch();
	return 0;
}
