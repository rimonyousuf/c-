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

    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }
};

int main()
{
    student alif(101,3.44);
    alif.display();

    student alim(101,3.44);
    alim.display();

    getch();
}
