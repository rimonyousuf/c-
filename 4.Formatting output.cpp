#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 numbers = ";
    cin>>num1>>num2;

    cout<<showpoint;
    cout<<fixed;
    cout<<setprecision(3);

    float sum=num1+num2;
    cout<<"Sum is = " <<sum;
    cout<<endl;

    float sub=num1-num2;
    cout<<"Substraction is = " <<sub;
    cout<<endl;

    float mul=num1*num2;
    cout<<"Multiplication is = " <<mul;
    cout<<endl;

    double div=(float)num1/num2;    //type casting
    cout<<"Division is = " <<div;
    cout<<endl;

    getch();
}
