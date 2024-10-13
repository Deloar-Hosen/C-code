#include <iostream>
using namespace std;

class Base1
{
    public:
  void greet()
  {
    cout<<"how are you?"<<endl;
  }
};

class Base2
{
    public:
  void greet()
  {
    cout<<"where are you?";
  }
};

class Derived:public Base1,public Base2
{
   int a;
   public:
   void greet()
   {
   Base1::greet();
   }
};

int main()
{
    Base1 obj;
    Base2 Obj;
    obj.greet();
    Obj.greet();
    Derived D;
    D.greet();
    return 0;
}