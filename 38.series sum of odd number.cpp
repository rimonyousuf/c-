//1+3+5+...+n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the last digit = ";
    cin>>n;

    for(int i=1; i<=n; i=i+2)
    {
        sum=sum+i;
    }
    cout<<"Sum is = "<<sum;

    getch();
}


