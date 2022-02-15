#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a=32,c;

    c=a>>3;
    cout<<"Rightshift 3 = " <<c<<endl;

    c=a>>2;
    cout<<"Rightshift 2 = " <<c<<endl;

    c=a<<3;
    cout<<"Leftshift 3 = " <<c<<endl;

    c=a<<2;
    cout<<"Leftshift 2 = " <<c<<endl;

    getch();
}

