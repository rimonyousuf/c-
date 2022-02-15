#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int x = 5;
    int y = 5;
    int *p1 , *p2;
    p1=&x;
    p2=&y;

    int sum = *p1 + *p2;
    cout<<sum;

    getch();
}
