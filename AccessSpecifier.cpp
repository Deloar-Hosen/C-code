#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int x, int y, int z);
    void getData()
    {
        cout << "the value of a is:" << a << endl;
        cout << "the value of b is:" << b << endl;
        cout << "the value of c is:" << c << endl;
        cout << "the value of d is:" << d << endl;
        cout << "the value of e is:" << e << endl;
    }
};
void employee::setData(int x,int y,int z)
{
    a=x;
    b=y;
    c=z;
}

int main()
{
    employee harry;
    harry.d=4;
    harry.e=5;
    harry.setData(1,2,3);
    harry.getData();
    return 0;
}