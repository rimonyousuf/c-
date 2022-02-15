#include<iostream>
#include<conio.h>
using namespace std;

void sum(int x,int y)
{
    int result=x+y;
    cout<<"Sum is = "<<result<<endl;
}
void sum(int x,int y,int z)
{
    int result=x+y+z;
    cout<<"Sum is = "<<result<<endl;
}

int main()
{
    sum(10,15);
    sum(10,15+5);

    getch();
}
