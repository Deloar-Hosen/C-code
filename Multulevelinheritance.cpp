#include <iostream>
using namespace std;

class Student
{
 private:
   int roll;
   public:
   void setRoll()
   {
    roll=9;
   }
   void getRoll()
   {
     cout<<"roll:"<<roll<<endl;
   }

};

class Exam:public Student
{
  protected:
  float maths;
  float physics;
  public:
  void serMarks(float m,float p)
  {
    maths=m;
    physics=p;
  }
  void getMarks()
  {
    cout<<"maths marks:"<<maths<<endl;
    cout<<"physics marks:"<<physics<<endl;
  }
};

class Result:public Exam
{
  float percentage;
  public:
  void display()
  {
   getRoll();
   getMarks();
    cout<<"your percentage is:"<<(maths+physics)/2<<endl;

  }
};

int main()
{
 Result harry;
 harry.setRoll();
 harry.serMarks(56.0,98.0);
 harry.display();


    return 0;
}