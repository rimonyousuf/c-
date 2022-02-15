#include<iostream>
#include<conio.h>
using namespace std;

void display(int a=20,int b=10)
{
    cout<<a<<endl;
    cout<<b<<endl;
}

int main()
{
    display();
    display(15,23);

    getch();
}
