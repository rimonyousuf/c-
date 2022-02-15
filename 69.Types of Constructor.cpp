#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;

    student(int x,double y)
    {
        id=x;
        gpa=y;
    }

    student()
    {
        cout<<"Default Constructor"<<endl;
    }

    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
};

int main()
{
    student ob;

    student alif(101,3.55);
    alif.display();

    getch();
}
