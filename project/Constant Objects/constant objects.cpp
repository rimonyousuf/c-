#include "constant objects.h"
#include<iostream>
using namespace std;

void Constant :: display() const
{
    cout<<"This is constant object"<<endl;
}

void Constant :: display1()
{
    cout<<"This is nonconstant function"<<endl;
}
