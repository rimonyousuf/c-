#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;
int main()
{
    //char name1[]="Rimon";
    //char name2[10];

    //int len=strlen(name1);
    //cout<<"Length of string = "<<len<<endl;

    //strcpy(name2,name1);
    //cout<<"Name 2 = "<<name2<<endl;

    //char name0[]="Rimon";
    //strupr(name0);
    //cout<<name0;

    //char name01[]="Rimon";
    //strlwr(name01);
    //cout<<name01;

    char name7[]="Rimon";
    char name8[]="rimon";

    int value=strcmp(name7,name8);

    if(value==0)
        cout<<"Strings are equal";
    else
        cout<<"Strings are not equal";

    getch();
}
