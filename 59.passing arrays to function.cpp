#include<iostream>
#include<conio.h>
using namespace std;

void arrayFunction(int number[],int arraySize)
{
    for(int i=0; i<5; i++)
    {
        cout<<number[i]<<" ";
    }
}

int main()
{
    int numbers[5]={10,20,30,40,50};
    arrayFunction(numbers,5);

    getch();
}
