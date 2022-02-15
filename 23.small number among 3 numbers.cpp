#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter 3 numbers = ";
    cin>>num1>>num2>>num3;

    if(num1<num2 && num1<num3)
    {
        cout<<"Small number = "<<num1;
    }
    else if(num2<num1 && num2<num3)
    {
        cout<<"Small number = "<<num2;
    }
    else
    {
        cout<<"Small number = "<<num3;
    }

    getch();
}

