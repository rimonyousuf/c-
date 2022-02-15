//1^2+2^2+3^2+...+n
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the last digit = ";
    cin>>n;

    for(int i=1; i<=n; i=i+1)
    {
        sum=sum+i*i;
    }
    cout<<"Sum is = "<<sum;

    getch();
}

