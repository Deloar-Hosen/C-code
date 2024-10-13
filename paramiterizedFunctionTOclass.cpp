#include<iostream>
using namespace std;

class student
{
  public:
  int id;
  double gpa;

  void display()
  {
    cout<<"id is="<<id<<endl<<"gpa is="<<gpa<<endl;
  }
  void setValue(int x,double y)
  {
    id=x;gpa=y;
  }
};
int main()
{ 
  student alim,robin,salam;
 
  alim.setValue(111,2.5);
  alim.display();

 robin.setValue(132,3.5);
 robin.display();

  salam.setValue(121,2.8);
  salam.display();

     return 0;
}