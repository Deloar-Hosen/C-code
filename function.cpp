#include <iostream>
using namespace std;

// prototype
void addition(int a, int b);
void subtraction(int a, int b);
void division(int a, int b);

int main()
{

  // function call

  addition(2, 3);
  subtraction(55, 64);
  division(60, 6);

  return 0;
}

// user-difinde function
void addition(int a, int b)
{
  int sum = a + b;
  cout << "sum=" << sum << endl;
}

void subtraction(int a, int b)
{
  int result = a - b;
  cout << "subtraction=" << result << endl;
}

void division(int a, int b)
{
  float result = (float)a / b;
  cout << "Division=" << result << endl;
}
