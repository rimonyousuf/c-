#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;

    void setValue(int x,double y)
    {
        id=x;
        gpa=y;
    }

    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
};

int main()
{
    student alif,alim;

    alif.setValue(101,3.44);
    alif.display();

    alif.setValue(102,4.44);
    alif.display();

    getch();
}
