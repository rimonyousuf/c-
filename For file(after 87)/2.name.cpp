#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    string myName;
    ofstream myname;

    myname.open("Name.txt",ios::out|ios::app);

    cout<<"Enter your name = ";
    getline(cin,myName);

    myname<<"Welcome "<<myName<<endl;
    myname.close();


    getch();
}
