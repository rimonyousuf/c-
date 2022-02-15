#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;
        void display()
        {
            cout<<id<<"  "<<gpa<<endl;
        }
};

int main()
{
    student alif,alim;

    alif.id=101;
    alif.gpa=3.44;
    alif.display();

    alim.id=102;
    alim.gpa=4.44;
    alim.display();

    getch();
}
