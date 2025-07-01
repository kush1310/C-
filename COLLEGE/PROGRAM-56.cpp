#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class movie_ticket
{
	long double ticket_id;
	string movie_name;
	int time_1;
	int time_2;
	float price;
	
	public:
	void getticket()
	{
		cout<<"ENTER MOVIE NAME:"<<endl;
		cin>>movie_name;
		cout<<"ENTER TICKET ID:"<<endl;
		cin>>ticket_id;
		cout<<"ENTER MOVIE'S TIME IN HOURS:"<<endl;
		cin>>time_1;
		cout<<"ENTER MOVIE'S TIME IN MINUTES:"<<endl;
		cin>>time_2;
		cout<<"ENTER PRICE OF MOVIE:"<<endl;
		cin>>price;
	}
	void disticket()
	{
		cout<<"DETAILS OF PARTICULAR MOVIE IS DISPLAYED AS FOLLOW:"<<endl;
		cout<<"MOVIE NAME-"<<movie_name<<endl<<endl;
		cout<<"TICKET ID-"<<ticket_id<<endl<<endl;
		cout<<"TIMING OF THE MOVIE-"<<time_1<<":"<<time_2<<endl<<endl;
		cout<<"PRICE OF THE MOVIE-"<<price<<endl<<endl;
	}
};
int main()
{
	movie_ticket ob;
	ob.getticket();
	ob.disticket();
	
	getch();
	return 0;
}

