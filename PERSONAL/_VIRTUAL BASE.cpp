#include<iostream>
using namespace std;
class demo1
{
    public:
    void output1()
    {
        cout<<"THIS IS BASE CLASS.."<<endl;
    }
};
class derive: virtual public demo1
{
    public:
    void output2()
    {
        cout<<"THIS IS DERIVE CLASS.."<<endl;
    }
};
int main()
{
    derive ob;
    ob.output1();
    ob.output2();
}