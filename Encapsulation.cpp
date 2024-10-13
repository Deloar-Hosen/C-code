#include <iostream>
#include <string>
using namespace std;

class student
{
   
    int id;
    int age;
   public:
   void setInfo(int x,int y)
   {
     id=x;
     age=y;
   }
    void disPlay()
    {
        cout<<id<<endl<<age<<endl;
    }
};

int main()
{
student rohan,harry;
rohan.setInfo(45,67);
rohan.disPlay();

harry.setInfo(54,65);
harry.disPlay();
    return 0;
}