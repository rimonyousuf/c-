#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        int id;
        double gpa;
};

int main()
{
    student alim,alif;

    alim.id=101;
    alim.gpa=3.44;
    cout<<"Alim ID and GPA = "<<alim.id<<"  "<<alim.gpa<<endl;

    alif.id=102;
    alif.gpa=3.94;
    cout<<"Alif ID and GPA = "<<alif.id<<"  "<<alif.gpa<<endl;

    getch();
}
