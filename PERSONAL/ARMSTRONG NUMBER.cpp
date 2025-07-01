#include<iostream>
#include<iomanip>
#include<math.h>
using namespace std;
int main()
{
 	int num, sum=0, lastdigit;
	int original_num=num;
	
	cout<<"ENTER ANY NUMBER:";
	cin>>num;
	while(num>0)
	{
		lastdigit=num%10;
		sum=sum+pow(lastdigit,3);
		num=num/10;				 
	}
	if(sum=original_num)
	{
		cout<<"THE ENTERED NUMBER IS AN ARMSTRONG NUMBER.."<<endl;
	}
	else
	{
		cout<<"THE ENTERED NUMBER IS NOT AN ARMSTRONG NUMBER.."<<endl;
	}
 	return 0;
}
