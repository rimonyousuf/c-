#include "myfirstclass.h"
#include<iostream>
using namespace std;

MyFirstClass::MyFirstClass()
{
    cout<<"Inside the constructor"<<endl;
}

MyFirstClass :: ~MyFirstClass()
{
    cout<<"Inside the destructor"<<endl;
}

void MyFirstClass :: display()
{
    cout<<"Inside the display"<<endl;
}
