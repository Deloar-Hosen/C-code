#include <iostream>
using namespace std;

class Overload
{
  public:
void sum(int x,int y)
{
  int add=x+y;
  cout<<add<<endl;
}
void sum(int x,int y,int z)
{
  int add=x+y+z;
  cout<<add<<endl;
}
};

int main() {

Overload s1,s2;
s1.sum(4,6);
s2.sum(5,7,9);

    return 0;
}