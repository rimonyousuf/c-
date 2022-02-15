#include<iostream>
#include<conio.h>
using namespace std;

void addition(int,int);
void subtraction(int,int);
void multiplication(int,int);
void division(int,int);

int main()
{
    addition(10,20);
    addition(10,10);
    cout<<endl;

    subtraction(10,5);
    subtraction(10,2);
    cout<<endl;

    multiplication(6,5);
    multiplication(6,3);
    cout<<endl;

    division(10,3);
    division(15,7);
    cout<<endl;

    cout<<"All function have called";

    getch();
}

void addition(int a,int b)
{
    int result=a+b;
    cout<<"Sum is = "<<result<<endl;
}
void subtraction(int a,int b)
{
    int result=a-b;
    cout<<"Sub is = "<<result<<endl;
}
void multiplication(int a,int b)
{
    int result=a*b;
    cout<<"Mul is = "<<result<<endl;
}
void division(int a,int b)
{
    float result=(float)a/b;
    cout<<"Div is = "<<result<<endl;
}
