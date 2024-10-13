#include <iostream>
#include <string>
using namespace std;

class student
{

  int id;
  int age;

public:
  student(int x, int y)
  {
    id = x;
    age = y;
  }
  void disPlay()
  {
    cout <<"id:"<< id << endl
         <<"age:"<<age << endl;
  }
};

int main()
{
  student rohan(48, 21);
  rohan.disPlay();

  student harry(54, 25);
  harry.disPlay();
  return 0;
}