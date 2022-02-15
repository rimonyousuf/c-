#include<iostream>
#include<conio.h>
using namespace std;

class person
{
    public:
        string name;
        int age;

    void display1()
    {
        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
    }
};

class student1 : public person
{
    public:
        int id;

    void display2()
    {
        cout<<"ID : "<<id<<endl;
        display1();
    }
};

class student2 : public student1
{
    public:
        double gpa;

    void display3()
    {
        cout<<"GPA : "<<gpa<<endl;
        display2();
    }
};

class student3 : public student2
{
    public:
        string dis;

    void display4()
    {
        cout<<"District : "<<dis<<endl;
        display3();
    }
};

int main()
{
    student3 s1;
    s1.name="Rimon Yousuf";
    s1.age=23;
    s1.id=101;
    s1.gpa=3.44;
    s1.dis="Meherpur";
    s1.display4();

    getch();
}
