#include<iostream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string str1="Rimon";
    string str2="Yousuf";
    string str3;

    str3=str1;
    cout<<"String 3 = "<<str3<<endl;

    str3=str1+str2;
    cout<<"String 3 Fullname = "<<str3<<endl;

    int len=str1.size();
    cout<<"Length of String 1 = "<<len<<endl;

    getch();
}
