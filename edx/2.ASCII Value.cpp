#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char inputChar;
    int asciiValue;

    cout<<"Enter a character : ";
    cin>>inputChar;

    asciiValue=(int)inputChar;
    cout<<"ASCII value of "<<inputChar<<" = "<<asciiValue<<endl;

    getch();
}
