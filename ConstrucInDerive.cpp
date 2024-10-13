#include <iostream>
using namespace std;

class Base1
{
    int data1;
public:
    Base1(int x)
    {
        data1 = x;
    }
    int printData1()
    {
        return data1;
    }
};

class Base2
{
    int data2;
public:
    Base2(int x)
    {
        data2 = x;
    }
    int printData2()
    {
        return data2;
    }
};

class Derived:public Base1,public Base2{
     int der1,der2;
     public:
     Derived(int a,int b,int c,int d):Base1(a),Base2(b)
     {
        der1=c;
        der2=d;
     }

     void disPlay()
     {
       cout<<"the value of der1:"<<der1<<endl;
       cout<<"the value of der2:"<<der2<<endl;
     }
};

int main()
{
    Derived harry(5,6,7,8);
    cout<<"data1:"<<harry.printData1()<<endl;
    cout<<"data2:"<<harry.printData2()<<endl;
    harry.disPlay();
    return 0;
}