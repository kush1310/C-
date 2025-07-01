#include<iostream>
using namespace std;
class demo
{
    public:
    int id;
    string name;
    float salary;
    demo(int id,string name, float salary)
    {
        this ->id=id;
        this ->name=name;
        this ->salary=salary;
    }
    void show()
    {
        cout<<id<<endl<<name<<endl<<salary<<endl;
    }
};
int main()
{
    demo ob=demo(70,"KUSH AMIT SHAH",400000);
    ob.show();
}