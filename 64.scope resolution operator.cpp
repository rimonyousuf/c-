#include<iostream>
#include<conio.h>
using namespace std;

int x=20; //global variable

int main()
{
    int x=10; //local variable
    ::x=30; //eta use krle print out e eta dekhabe
    cout<<::x<<endl;

    getch();
}
