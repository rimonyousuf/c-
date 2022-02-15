//1^5+2^5+3^5+...+n^5
#include<iostream>
#include<conio.h>
#include<cmath>
using namespace std;
int main()
{
    int sum=0,n;
    cout<<"Enter the last digit = ";
    cin>>n;

    for(int i=1; i<=n; i=i+1)
    {
        sum=sum+pow(i,5);
    }
    cout<<"Sum is = "<<sum;

    getch();
}


