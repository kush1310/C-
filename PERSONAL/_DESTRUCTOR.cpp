#include<iostream>
using namespace std;
int count=0;
class demo
{
    public:
    demo()
    {
        count++;
        cout<<"NUMBER OF OBJECTS CREATED:"<<count<<endl;
    }
    ~demo()
    {
            count--;
            cout<<"NUMBER OF OBJECTS DESTROYED:"<<count<<endl;
    }
};
int main()
{
    demo ob1,ob2,ob3,ob4;
    {
       demo ob5;
    } 
}