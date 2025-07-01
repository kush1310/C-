#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    demo()
    {
        a=10;
    }
    demo(demo &z)
    {
        a=z.a;
    }
    void output()
    {
        cout<<"VALUE IS:"<<a<<endl;
    }
};
int main()
{
    demo ob1;
    demo ob2(ob1);
    ob1.output();
    ob2.output();
}