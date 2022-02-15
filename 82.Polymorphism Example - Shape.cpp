#include<iostream>
#include<conio.h>
using namespace std;

class shape
{
    public:
        double dim1,dim2;

        shape(double dim1,double dim2)
        {
            this -> dim1=dim1;
            this -> dim2=dim2;
        }

        virtual double area()
        {
            return 0;
        }
};

class triangle : public shape
{
    //dim1,dim2,area is declared in shape class
    public:
        triangle(double dim1,double dim2) : shape(dim1,dim2)
        {

        }
        double area()
        {
            return 0.5 * dim1 * dim2;
        }
};

class rectrangle : public shape
{
    public:
        rectrangle(double dim1,double dim2) : shape(dim1,dim2)
        {

        }
        double area()
        {
            return dim1 * dim2;
        }
};

int main()
{
    shape *s;
    triangle t(10,20);
    rectrangle r(6,3);

    s=&t;
    cout<<"Area of Triangle = "<<s -> area()<<endl;

    s=&r;
    cout<<"Area of Rectrangle = "<<s ->area()<<endl;

    getch();
}
