#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any number = ";
    cin>>num;

    (num%2==0) ? cout<<num <<" is Even number" : cout<<num <<" is Odd number";

    getch();
}
