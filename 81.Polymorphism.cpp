#include<iostream>
#include<conio.h>
using namespace std;

class person
{
    public:
        virtual void display()
        {
            cout<<"I am a Person"<<endl;
        }
};

class student : public person
{
    public:
        void display()
        {
            cout<<"I am a Student"<<endl;
        }
};

class teacher : public person
{
    public:
        void display()
        {
            cout<<"I am a Teacher"<<endl;
        }
};

int main()
{
    person *p;
    student s;
    teacher t;

    p=&s;
    p -> display();

    p=&t;
    p -> display();

    getch();
}
