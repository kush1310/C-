#include <iostream>
#include<string.h>
using namespace std;
const int NUM_STUDENTS=70;
int main() 
{
    string students[NUM_STUDENTS];
    bool attendance[NUM_STUDENTS];
    
    cout<<"ENTER THE ATTENDANCE RECORD FOR EACH STUDENT:\n";
    cout<<"NOTE:- PRESS 1 FOR PRESENT AND 0 FOR ABSENT"<<endl;
    for (int i=0;i< NUM_STUDENTS;i++) 
	{
        cout<<"STUDENT-"<<i+1 <<":";
        cin>> attendance[i];
    }
    cout << "\nATTENDANCE RECORD:\n";
    for (int i=0;i<NUM_STUDENTS;i++) 
	{
        cout<<"Student-"<<i+1<< ":"<<(attendance[i] ? "PRESENT" : "ABSENT")<<endl;
    }
    return 0;
}