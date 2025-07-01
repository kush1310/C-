#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int row,col;
    cout<<"ENTER THE NUMBER OF ROWS:"<<endl;
    cin>>row;
    cout<<"ENTER THE NUMBER OF COLOUMS:"<<endl;
    cin>>col;
    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            cout<<" *";
        }
            cout<<endl;
    }
        return 0;   
}