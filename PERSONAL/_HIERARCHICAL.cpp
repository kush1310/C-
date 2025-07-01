#include<iostream>
using namespace std;
class demo
{
    public:
    void display1()
    {
        cout<<"THIS IS BASE."<<endl;
    }
};
class derive1:public demo
{
    void display2()
    {
         cout<<"THIS IS DERIVE-1."<<endl;
    }
};
class derive2:public demo
{
    void display3()
    {
        cout<<"THIS IS DERIVE-2."<<endl;
    }
};
int main()
{
    derive2 ob1;
    derive1 ob2;
    ob1.display1();
    ob2.display1();
}