#include<iostream>
#include<string.h>
using namespace std;

class student
{
    public:
    string name;
    int age;
    float gpa;

 void input()
 {
    cout<<"enter your name:";
    cin>>name;
    cout<<"enter your age:";
    cin>>age;
    cout<<"enter your gpa:";
    cin>>gpa;
 }
 void display()
 {
    cout<<"Name:"<<name<<endl;
    cout<<"Age="<<age<<endl;
    cout<<"gpa="<<gpa<<endl<<endl;
 }
 
};

int main()
{ 
 student Person1,Person2;

 Person1.input();
// Person2.input();

cout<<endl<<endl;
 Person1.display();
 //Person2.display();



     return 0;
}