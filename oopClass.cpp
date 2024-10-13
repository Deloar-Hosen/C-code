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
};
int main()
{ 
  student alim,robin,salam;
  
  alim.id=56;
  alim.gpa=3.4;
  alim.display();

  robin.id=53;
  robin.gpa=3.7;
 robin.display();

  salam.id=45;
  salam.gpa=3.7;
  salam.display();

     return 0;
}
