#include <iostream>
using namespace std;

class baseclass{

    public:
 int varbase=1;
 virtual void display()
 {
    cout<<"displaying base class variable varbase:"<<varbase<<endl;
 }
};

class derivedclass:public baseclass{
public:
int varder=2;
void display()
{
    cout<<"displaying base class var varbase:"<<varbase<<endl;
    cout<<"displaying derived class var varder:"<<varder<<endl;
}
};

int main()
{
baseclass *baseptr;
baseclass objbase;
derivedclass objder;
baseptr=&objder;

baseptr->display();



    return 0;
}