#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int A[3][4]={
                    {5,8,4,3},
                    {3,9,2,7},
                    {1,9,2,7}
                };
    for(int row=0; row<3; row++)
    {
        for(int col=0; col<4; col++)
        {
            cout<<A[row][col]<<" ";
        }
        cout<<endl;
    }

    getch();
}
