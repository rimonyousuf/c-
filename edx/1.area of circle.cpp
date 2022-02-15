#include<iostream>
#include<cmath>
#include<conio.h>
using namespace std;
int main()
{
    double radius,area;
    cout<<"Enter radius for circle = ";
    cin>>radius;

    area=M_PI * (radius*radius);
    cout<<"Area of circle is = "<<area<<endl;

    getch();
}
