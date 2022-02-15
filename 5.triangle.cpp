#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double base,height,area;

    cout<<"Enter Base = ";
    cin>>base;

    cout<<"Enter Height = ";
    cin>>height;

    area=(float)1/2 * base * height;

    cout<<"Area of Triangle is = " <<area;

    getch();
}
