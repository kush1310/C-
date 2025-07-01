#include<iostream>
using namespace std;
class demo
{
    public:
    virtual void input()=0;
};
class demo2:public demo
{
    public:
      void input()
    {
        cout<<"HELLO GUYS"<<endl;
    }
};
int main()
{
    demo *ob1;
    demo2 ob2;
    ob1=&ob2;
    ob1->input();
}