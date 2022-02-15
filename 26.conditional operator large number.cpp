#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 numbers = ";
    cin>>num1>>num2;

    int large = (num1>num2) ? num1 : num2;
    cout<<"Large number is = " <<large;

    getch();
}
