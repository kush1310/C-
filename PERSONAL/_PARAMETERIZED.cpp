#include<iostream>
using namespace std;
class demo
{
    int a,b;
    public:
    demo(int x, int y)
    {
        a=x;
        b=y;
    }
    void input()
    {
        cout<<"ENTER VALUES OF A AND B:"<<endl;
        cin>>a>>b;
    }
    void output()
    {
        cout<<"VALUES ARE:"<<a<<endl<<b;
    }
};
int main()
{
    demo ob(0,0);
    ob.input();
    ob.output();
}