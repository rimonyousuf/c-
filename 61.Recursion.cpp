#include<iostream>
#include<conio.h>
using namespace std;

int fact(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}

int main()
{
    int k,factorial;
    cout<<"Enter any number that you would like to see factorial = ";
    cin>>k;

    factorial=fact(k);

    cout<<"Factorial number of "<<k<<" is = "<<factorial<<endl;

    getch();
}
