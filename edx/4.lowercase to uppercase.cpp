#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    char lowerCaseLetter,upperCaseLetter;
    int offset;

    cout<<"Enter the Lowercase letter : ";
    cin>>lowerCaseLetter;

    offset=(int)(lowerCaseLetter - 'a');
    upperCaseLetter=(char)('A' + offset);

    cout<<"The upper case letter of "<<lowerCaseLetter<<"is : "<<upperCaseLetter<<endl;

    getch();
}
