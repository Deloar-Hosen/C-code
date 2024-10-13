#include <iostream>
using namespace std;

class Base1
{
protected:
    int base1;

public:
    void setData1(int a)
    {
        base1 = a;
    }
};
class Base2
{
protected:
    int base2;
    public:
    void setData2(int b)
    {
        base2 = b;
    }
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "the value of base1 is " << base1 << endl;
        cout << "the value of base2 is " << base2 << endl;
        cout << "the sum of those valuse is " << base1 + base2 << endl;
    }
};

int main()
{
    Derived harry;
    harry.setData1(6);
    harry.setData2(8);
    harry.display();

    return 0;
}