#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public:
        const int admissionFee;
        const int examFee;
        int id;

    student(int x,int y,int z)
    : admissionFee(x),examFee(y)
    {
        cout<<"Admission fee is = "<<admissionFee<<endl;
        cout<<"Exam fee is = "<<examFee<<endl;

        id=z;
        cout<<"Id is = "<<id<<endl;
    }
};

int main()
{
    student s1(15000,500,101);

    getch();
}
