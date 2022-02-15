#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
    ofstream file;
    file.open("Student.txt");
    file<<"Hi this is Rimon.I live in China.\n";
    file.close();

    getch();
}
