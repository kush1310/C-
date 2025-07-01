#include<iostream>
using namespace std;
class demo1
{
    public:
    virtual void show()=0;
};
class demo2:public demo1
{
    public:
    void show()
    {
        cout<<"VIRTUAL FUNCTION IN DERIVED CLASS..."<<endl;
    }
};
int main()
{
    demo2 ob;
    ob.show();
}