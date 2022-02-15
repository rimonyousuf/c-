#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter 2 number = ";
    cin>>num1>>num2;

    if(num1>num2){
        cout<<"Large = " <<num1;
    }
    else{
        cout<<"Large = " <<num2;
    }

    getch();
}
