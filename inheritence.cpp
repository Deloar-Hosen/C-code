#include <iostream>
using namespace std;

class person
{
public:
  string name;
  int age;
  void display1()
  {
    cout << "age=" << age << endl
         << "name:" << name << endl;
  }
};
class student : public person
{
public:
  int id;
  void display2()
  {
    cout << "id=" << id << endl;
    display1();
  }
};
int main()
{
  student s1;
  s1.age = 33;
  s1.name = "delaor";
  s1.id = 33;
  s1.display2();

  return 0;
}