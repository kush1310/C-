#include <iostream>
using namespace std;
const int NUM_STUDENTS=5;
const int NUM_SUBJECTS=6;

int main()
{
    int marks[NUM_STUDENTS][NUM_SUBJECTS];
    for (int i=0;i<NUM_STUDENTS;i++) 
	{
        cout<<"ENTER MARKS OF THE STUDENTS"<<i+1<<":\n";
        for (int j=0;j<NUM_SUBJECTS;j++) 
		{
            cout<<"SUBJECT"<<j+1<<":";
            cin>>marks[i][j];
        }
        cout<<endl;
    }
    cout<<"MARKS OF THE STUDENT:\n";
    for (int i=0;i<NUM_STUDENTS;i++) 
	{
        cout<<"STUDENT"<<i+1<<":\n";
        for (int j=0;j<NUM_SUBJECTS;j++) 
		{
            cout<<"SUBJECT-"<<j+1<<":"<<marks[i][j]<<endl;
        }
        cout<<endl;
    }
    return 0;
}