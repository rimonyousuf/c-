#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    double cels,farn;
    cout<<"Enter Celsius = ";
    cin>>cels;

    farn=1.8 * cels + 32;

    cout<<"Fahrenheit is = " <<farn;
    cout<<endl;

    cout<<"Enter Fahrenheit = ";
    cin>>farn;

    cels=(farn - 32)/1.8;

    cout<<"Celsius is = " <<cels;

    getch();
}
