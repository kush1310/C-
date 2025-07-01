#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
class circle
{
	private:
		int r;
	public:
		void data();
	 	void show();
};
void circle::data()
{
	cout<<"ENTER THE RADIUS OF THE CIRCLE:";
	cin>>r;
}
void circle::show()
{
	float ans;
	ans=3.14*r*r;
	cout<<"AREA="<<ans;
}
int main()
{
 	circle ob;
 	ob.data();
 	ob.show();
 	return 0;
}