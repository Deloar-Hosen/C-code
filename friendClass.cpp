#include <iostream>
using namespace std;

class A{
    int id=100;
    string name="Deloar hosen";
    friend class B;
};
class B{
    public:
    void display(A ob)
    {
      cout<<"id="<<ob.id<<endl;
      cout<<"name="<<ob.name;
    }
};

int main()
{
A ob1;
B ob2;
ob2.display(ob1);
    return 0;
}