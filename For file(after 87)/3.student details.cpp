#include<iostream>
#include<fstream>
#include<conio.h>
#include<string>
using namespace std;
int main()
{
    string name;
    int age;

    ofstream file;
    file.open("Student_Details.txt",ios::out|ios::app);

    for(int i=1; i<=3; i++)
    {
        cout<<"Enter your name : ";
        getline(cin,name);
        file<<name<<"\t";

        cout<<"Enter your age : ";
        cin>>age;
        file<<age<<endl<<endl;

        cin.ignore();

        cout<<endl;
    }
    file.close();

    getch();
}
