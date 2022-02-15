#include<iostream>
#include<conio.h>
using namespace std;

class MobileUser
{
    public:
        virtual void sendMessage()=0;
};

class rahim : public MobileUser
{
    public:
        void sendMessage()
        {
            cout<<"Hi!This is Rahim."<<endl;
        }
};

class karim : public MobileUser
{
    public:
        void sendMessage()
        {
            cout<<"Hi!This is Karim."<<endl;
        }
};

int main()
{
    MobileUser *m;
    rahim r;
    karim k;

    m=&r;
    m->sendMessage();

    m=&k;
    m->sendMessage();

    getch();
}
