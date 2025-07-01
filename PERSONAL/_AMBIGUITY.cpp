#include<iostream>
using namespace std;
class A
{
    protected:
    int a;
    public:
    void input()
    {
        cout<<"ENTER VALUE:"<<endl;
        cin>>a;
    }
    void dis1()
    {
        cout<<"VALUE IS:"<<a<<endl;
    }
};
class B
{
    protected:
    int b;
    public:
    void input()
    {
        cout<<"ENTER VALUE:"<<endl;
        cin>>b;
    }
    void dis2()
    {
        cout<<"VALUE IS:"<<b<<endl;
    }
};
class C:public A, public B
{
    protected:
    int c;
    public:
    void input()
    {
        cout<<"ENTER VALUE:"<<endl;
        cin>>c;
    }
    void dis3()
    {
        cout<<"VALUE IS:"<<c<<endl;
        A::input();
        B::input();
    }
};
int main()
{
    C ob;
    ob.input();
    ob.dis1();
    ob.dis2();
    ob.dis3();
    return 0;
}