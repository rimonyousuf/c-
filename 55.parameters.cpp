#include<iostream>
#include<conio.h>
using namespace std;

void square(int n)
{
    int result=n*n;
    cout<<"Square of "<<n<<" = "<<result<<endl;
}

int main()
{
    square(7);
    square(8);
    square(9);

    getch();
}
