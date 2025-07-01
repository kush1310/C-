#include<iostream>
using namespace std;
class demo
{
    int a;
    public:
    demo()
    {
        a=1310;
    }
    void output()
    {
        cout<<a;
    }
};
int main()
{
    demo ob;
    ob.output();
}