#include<iostream>
#include<conio.h>
using namespace std;

template<class myTemplate1,class myTemplate2>
myTemplate2 add(myTemplate1 a,myTemplate2 b)
{
    return a+b;
}

int main()
{
    cout<<add(10,20.6)<<endl;

    getch();
}
