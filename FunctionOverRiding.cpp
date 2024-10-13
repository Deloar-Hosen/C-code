#include <iostream>
using namespace std;

class Person
{
    public:
    void display ()
    {
        cout<<"i am a person."<<endl;
    }
};
class student:public Person
{
    public:
    void display ()
    {
        cout<<"i am a student."<<endl;
    }
};
class Teacher:public student
{
    public:
    void display ()
    {
        cout<<"i am a Teacher."<<endl;
    }
};

int main()
{
    Person p;
    p.display();
    student s;
    s.display();
    Teacher t;
    t.display();

    return 0;
}